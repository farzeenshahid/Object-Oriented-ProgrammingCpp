#include <iostream>
using namespace std;
class Bankaccount
{
    private:
    int account_number;
    int current_balance;
    public:
    int x;
    char y;
    Bankaccount *z;
    //default constructor:
    Bankaccount()
    {
        this->account_number = 0;
        this->current_balance = 0;
    }
    //parametrized constructor
    Bankaccount(int start_balance=0)
    {
        this->current_balance = start_balance;
    }
    //copy constructor
    Bankaccount(const Bankaccount& copied_account)
    {
        this->account_number = copied_account.account_number;
        this->current_balance = copied_account.current_balance;
    }
    void setAccountNumber(int a)
    {
        this->account_number = a;
    }
    void getAccountNumber()
    {
        cout<< account_number;
    }
    void getCurrent_Balance()
    {
        cout<<current_balance;
    }

};
int main()
{
    Bankaccount account1(50);
    Bankaccount account2(10000);
    Bankaccount account3(55000);
    account1.setAccountNumber(100);
    account2.setAccountNumber(110);
    account3.setAccountNumber(120);
    cout<<"Account number is: "<<endl;
    account1.getAccountNumber();
    cout<<"\n";
    account2.getAccountNumber();
    cout<<"\n";
    account3.getAccountNumber();
    cout<<"\n";
    Bankaccount account4 = account1;           //copy construtor called using assignment operator
    Bankaccount *account_ptr1 = new Bankaccount(100);     //dynamically creating object
    account_ptr1->setAccountNumber(130);
    account_ptr1->getAccountNumber();
    Bankaccount *account_ptr2 = new Bankaccount(0);
    account_ptr1 = account_ptr2;           //rediecting other pointer to pointthe same object
    delete account_ptr1;
    delete account_ptr2;
    return 0;
}
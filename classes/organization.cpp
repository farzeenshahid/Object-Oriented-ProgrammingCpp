#include<iostream>
using namespace std;
class Employee
{
    protected:
    static int employeeCount;
    int personalId;
    char name[30];
    public:
    Employee()
    {
        cout<<"Employee constructor called "<<endl;
        employeeCount++;
        personalId = employeeCount;
        cout<<"Enter employee name: "<<endl;
        cin>>name;
    }
    static int getemployeeCount()
    {
        return employeeCount;
    }
    int getID()
    {
        return personalId;
    }
    char* getName()
    {
        return name;
    }
};
class Director: public Employee
{
    private:
    int shareholding;
    public:
    Director()
    {
        cout<<"Director constructor called "<<endl;
        cout<<"Enter shareholding for "<<name<<endl;
        cin>>shareholding;
    }
    int getShareholding()
    {
        return shareholding;
    }
};
class SalariedWorker:public Employee
{
    private:
    float annualsalary;
    public:
    SalariedWorker()
    {
        cout<<"Salaried constructor called "<<endl;
        cout<<"Enter salary for "<<name<<endl;
        cin>>annualsalary;
    }
    float getSalary()
    {
        return annualsalary;
    }
};
class Hourlypaid:public Employee
{
    private:
    float hourly_rate;
    public:
    Hourlypaid()
    {
        cout<<"HOurly paid constructor called "<<endl;
        cout<<"Enter hourly rate of "<<name<<endl;
        cin>>hourly_rate;
    }
    float getRate()
    {
        return hourly_rate;
    }
};
int Employee::employeeCount;
int main()
{
    //setting values for arrays
    const int DIRECTORS = 2;
    const int SALARIED = 2;
    const int HOURLY_PAID = 4;
    //constant standard dividend and working hours
    const float DIVIDEND = 3.50;
    const int Hours_in_year = 40*52;
    //creating 3 arrays
    Director directors[DIRECTORS];
    SalariedWorker salaried[SALARIED];
    Hourlypaid hours[HOURLY_PAID];
    //initializing temporay stores
    float t_dividend =0, t_salary = 0, t_wage= 0;
    //iterate through directors array 
    for(int i=0;i<DIRECTORS;i++)
    {
        cout<<"Process director, ID number"<<directors[i].getID()<<endl;
        t_dividend+=(directors[i].getShareholding()*DIVIDEND);
    }
    //iterate through salaried
    for(int i =0;i<SALARIED;i++)
    {
        cout<<"Process salaried, ID number"<<salaried[i].getID()<<endl;
        t_salary+=(salaried[i].getSalary());
    }
    //iterate through hourly
    for(int i =0;i<HOURLY_PAID;i++)
    {
        cout<<"Process hourly, ID number"<<hours[i].getID()<<endl;
        t_wage+=(hours[i].getRate()*Hours_in_year);
    }
    
}
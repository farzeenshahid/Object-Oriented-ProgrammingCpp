#include <iostream>
#include <string>
using namespace std;
class laptop_slip_generator
{
    private:
        string customer_name;
        string date;
        string time;
        int no_of_laptops;
        int price;
    public:
        void setData(int x, int y, string name, string d, string t)
        {no_of_laptops = x, price = y, customer_name = name, date = d, time = t;}
        void Totalbill()
        {cout<<"Price: "<<no_of_laptops*price<<endl;}
        void customerinfo()
        {cout<<"Name of customer is:  "<<customer_name<<endl;}
        void timecheck()
        {cout<<"Date: "<<date<<endl;
        cout<<"Time: "<<time<<endl;}


};
int main()
{
    laptop_slip_generator customer1;
    customer1.setData(2, 75000, "Muhammad Bilal", "2/19/2022", "1:28 PM" );
    customer1.customerinfo();
    customer1.Totalbill();
    customer1.timecheck();
    laptop_slip_generator customer2;
    customer1.setData(5, 65000, "Ramsha Tariq", "2/09/2022", "16:05 PM");
    customer2.customerinfo();
    customer2.Totalbill();
    customer2.timecheck();
    return 0;

}

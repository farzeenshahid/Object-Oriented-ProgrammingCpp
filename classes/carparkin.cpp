//Car parking system
#include <iostream>
#include <string.h>
using namespace std;
class Car
{
    public:
        Car(){}
};
int main()
{   //reserving array of pointers of 10 for parking slots
    Car* parking[10];
    //setting pointers to null
    for(int i=0;i<10;i++)
    {
        parking[i]=NULL;
    }
    //temporary storage for keyboard input
    int menu_choice=0;
    int garage_number;
    //loop to park and unpark cars
    while (menu_choice!=3)
    {
        cout<<"Enter 1 to park, 2 to leave and 3 to quit: "<<endl;
        cin>>menu_choice;
        //if user choses to park
        if(menu_choice==1)
        {
            cout<<"Following slot no.s are empty: ";     //display available spaces
            for(int i=0;i<10;i++)
            {
                if(parking[i]==NULL)
                {
                    cout<<i+1<<",";
                }
            }
            cout<<endl;
            cout<<"Enter slot no. to park: "<<endl;       
            cin>>garage_number;
            //if user choses available space
            if(parking[garage_number-1]==NULL)
            {
                parking[garage_number-1]= new Car();
                cout<<"car parked at: "<<garage_number<<endl;
            }
            else
            {
                cout<<"Space is not empty"<<endl;
            }
        }
        //if user choses to remove the car
        if(menu_choice==2)
        {
            cout<<"Following garage numbers are occupied: ";     
            for(int i=0;i<10;i++)
            {
                if(parking[i]!=NULL)
                {
                    cout<<i+1<<"'";
                }
            }
            cout<<endl;
            cout<<"Enter garage no. to empty: "<<endl;
            cin>>garage_number;
            //if user choses occupied slot
            if(parking[garage_number-1]!=NULL)
            {
                cout<<"Car removed from "<<garage_number<<endl;
                delete parking[garage_number-1];
                parking[garage_number-1]=NULL;
            }
            //if user choses empty slot
            else
            {
                cout<<"Parking space is already unoccupied."<<endl;
            }
        }

    }
    //cleanup process
    for(int i=0;i<10;i++)
    {
        if (parking[i]!=NULL)
        {
            delete parking[i];

        }
    }
    
}

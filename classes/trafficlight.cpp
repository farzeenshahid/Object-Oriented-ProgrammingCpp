#include <iostream>
using namespace std;
//defining two constant colour states
const int RED = 1;
const int GREEN = 0;
class Trafficlight
{
    private:
    int colour;
    public:
    //default constructor
    Trafficlight();
    //methods
    void changeColour();
    void showColour();

};
//default constructor definition
Trafficlight::Trafficlight()
{
    colour = RED;
}
//member definition
void Trafficlight::changeColour()
{
    if(colour == RED)
    {
        colour = GREEN;
    }
    else
    {
        colour = RED;
    }
}
void Trafficlight::showColour()
{
    if(colour == RED)
    {
        cout<<"RED"<<endl;
    }
    else
    {
        cout<<"GREEN"<<endl;
    }
}
//external object created
Trafficlight external_object;
int main()
{
    //external object method calling 
    external_object.changeColour();
    for(int i=0;i<2;i++)
    {
        cout<<"For count: "<<i<<endl;
        //automatic object created
        Trafficlight automatic_light1;
        //automatic object functio call
        automatic_light1.changeColour();
        //static object created
        static Trafficlight static_light2;
        //static object function call
        static_light2.changeColour();
        cout<<"Automatic light is ";
        automatic_light1.showColour();
        cout<<"Static light is ";
        static_light2.showColour();
    }
    cout<<"External light is ";
    external_object.showColour();
    return 0;
    
}
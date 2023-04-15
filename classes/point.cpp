#include <iostream>
using namespace std;
class Point
{
    private:
    int x,y;
    public:
    Point()
    {
        x=0;
        y=0;
    }
    void setXY(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    //overloading + operator to add 2 objects of type point (P3 = P1 + p2)
    Point operator+(const Point& obj)
    {
        Point temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }
    //overloading << operator (cout<<p1)
    friend ostream& operator<<(ostream& out, const Point& p)
    {
        out<<p.x<<p.y;
        return out;
    }
    //overloading >> operator (cin>>p1)
    friend istream& operator>>(istream& in, Point& p)
    {
        in>>p.x>>p.y;
        return in;
    }
    

};
int main()
{
    Point p1,p2,p3;
    p1.setXY(5,5);
    p2.setXY(3,3);
    //Rn + operator is overloaded but << operator is not overloaded
    cout<<"Details of point p1: "<<p1.getX()<<" , "<<p1.getY()<<endl;
    cout<<"Details of point p2: "<<p2.getX()<<" , "<<p2.getY()<<endl;
    p3 = p1 + p2;
    cout<<"Details of point p3: "<<p3.getX()<<" , "<<p3.getY()<<endl;
    //Now << & >> is overloaded
    Point p4 = p1;
    cout<<p4<<endl;
    Point p5;
    cout<<"Enter point p5: ";
    cin>>p5;
    cout<<p5;

    return 0;
}
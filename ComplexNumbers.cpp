#include <iostream>
using namespace std;
class ComplexNumber
{
    public:
        int real;         //declaring attributes
        float imaginary;
        ComplexNumber()        //default constructor
        {
            real = 0;
            imaginary = 0;
        }
        ComplexNumber(int r, float i)       //parametrized constructor
        {
            real = r;
            imaginary = i;
        }
        ComplexNumber(const ComplexNumber& z)           //copy constructor of default constructor
        {
            real = z.real;
            imaginary = z.imaginary;
        }
        void set()                        //declaring member function set
        {
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>imaginary;
        }
        
        void display()           // declaring member function display
        {
            cout<<"The complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
        }
        
};  
        ComplexNumber operator+ (ComplexNumber w1, ComplexNumber w2)
        {
            ComplexNumber sum;
            sum.real = w1.real + w2.real;
            sum.imaginary = w1.imaginary + w2.imaginary;
            return sum; 
        }
        ComplexNumber operator- (ComplexNumber w1, ComplexNumber w2)
        {
            ComplexNumber minus;
            minus.real = w1.real - w2.real;
            minus.imaginary = w1.imaginary - w2.imaginary;
            return minus;
        }
        ComplexNumber operator* (ComplexNumber w1, ComplexNumber w2)
        {
            ComplexNumber product;
            product.real = w1.real * w2.real - w2.imaginary*w2.imaginary;
            product.imaginary = w1.real * w2.imaginary - w2.real*w2.imaginary;
            return product;

        }
        ComplexNumber divide (ComplexNumber w1, ComplexNumber w2)
        {
            ComplexNumber ratio;
            ratio.real = (w1.real*w2.real + w1.imaginary*w2.imaginary) / (w2.real*w2.real + w2.imaginary*w2.imaginary);
            ratio.imaginary = (w1.imaginary*w2.real + w1.real*w2.imaginary) / (w2.real*w2.real + w2.imaginary*w2.imaginary);
            return ratio;
        }

int main()
{
    ComplexNumber C1;          //invoking null constructor
    ComplexNumber C2 = C1;     //invoking copyconstructor
    ComplexNumber C3(2,5);     //invoking parametrized constructor
    C1.display();             //show objects
    C2.display();
    C3.display();
    cout<<"First complex number is: "<<C3.real<<"+ i"<<C3.imaginary<<endl;
    ComplexNumber C4;
    C4.set();             //taking values from user
    C4.display();
    cout<<"Second complex number is: "<<C4.real<<"+ i"<<C4.imaginary;
    ComplexNumber add;          //Adding two objects
    add = C3 + C4;
    add.display();
    ComplexNumber sub;
    sub = C3-C4;   //Subtracting two objects
    sub.display();
    ComplexNumber multi;         //Multiplying two objects
    multi = C3*C4;
    multi.display();
    ComplexNumber div;           //Dividing 2 objects
    div = divide(C3,C4);
    div.display();

    return 0;


}
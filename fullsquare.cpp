#include <iostream>
using namespace std;
class square{                               //Base class
    public:
        int length;
        int breadth;
    public:
        square(){                                        //default constructor
            cout<<"calling default constructor of base class\n";
        }
        square(int length, int breadth){               //Parametrized constructor
            cout<<"call para const of base class\n";
            this->length = length;
            this->breadth = breadth;
        }
        void display(){                                   //Method display
            cout<<"Area is "<<length*breadth<<endl;
        }
        ~square(){                                  //base class destructor
            cout<<"calling base destructor\n";
        }
};
class cube:public square{                              //derived class
    public:
        int height;
        cube(){                                        //derived class default constructor
            cout<<"calling default constructor of derived class\n";
        }
        cube(int length, int breadth, int height){          //derived class para constructor
            cout<<"calling para const of derived class\n";
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }
        void volume(){
            cout<<"volume is "<<length*breadth*height<<endl;
        }
        ~cube(){                                        //derived class destructor
            cout<<"calling derived destructor\n";
        }
};
int main(){                                     //driver code
    cube c;        //calling default of base then default of derived from child class default constructor
    cube d(3,6,9);   //calling default of base then para of derived from child class para constructor
    d.display();
    d.volume();
    c.length=5; c.breadth=16; c.height = 10;
    c.display();
    c.volume();
    return 0;
}
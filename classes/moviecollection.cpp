#include <iostream>
using namespace std;
class Movie
{
    private:
    string name;
    string productionhouse;
    int year;
    public:
    Movie()
    {
        this->name="xxxx";
        this->productionhouse="yyyyyyyyy";
        this->year=0000;
    }
    Movie(string name,string productionhouse,int year)
    {
        this->name = name;
        this->productionhouse = productionhouse;
        this->year = year;
    }
    Movie(const Movie& m)
    {
        this->name = m.name;
        this->productionhouse = m.productionhouse;
        this->year = m.year;  
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPDH(string productionhouse)
    {
        this->productionhouse = productionhouse;
    }
    void setYear(int year)
    {
        this->year= year;
    }
    string getName()
    {
        return name;
    }
    string getPDH()
    {
        return productionhouse;
    }
    int getyear()
    {
        return year;
    }
    friend ostream& operator<<(ostream& out, Movie& M)
    {
        out<<M.getName()<<M.getPDH()<<M.getyear()<<endl;
        return out;
    }

};
class Moviecollection
{
    private:
    Movie *movielist;
    int count;
    int size;
    public:
    Moviecollection()
    {
        size = 10;
        count = 0;
        movielist = new Movie[size]; 

    }
    void addmovie(Movie &m, int count)
    {
        this->count = count;
        if(size==count)
        {
            increasesize();
        }
        movielist[count] = m;
        count=count+1;
    }
    void increasesize()
    {
        this->size= size* 2;
        Movie *ptr = nullptr;
        ptr= new Movie[size];
        for(int i=0; i<=count;i++)
        {
            ptr[i]= this->movielist[i];
        }

        delete [] movielist;
        for(int j=0; j<=count;j++)
        {
        cout<<"\nI am printing after inc size "<<movielist[j];
        }
        movielist= ptr;


    }
    void show()
    {
        for(int i=0;i<=this->count;i++)
        {
            cout << this->movielist[i]<<"\n\n";
        }

    }


};
int main()
{
    Moviecollection mymoviemanager;
    Movie m1("Dr.Strange","Marvel Studios",1999);
    mymoviemanager.addmovie(m1,0);
    return 0;
}


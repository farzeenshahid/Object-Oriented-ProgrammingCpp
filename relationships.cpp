//teachers and students are university personnels.
#include <iostream>
using namespace std;
class person{         //composition
    string name;
    int age;
    int uid;
public:
    person(){
        uid = 0;
    }
    person(string name, int age, int uid)
    {
        this->name = name;
        this->age = age;
        this->uid = uid;
    }
    void setNAME(string name)
    {
        this->name = name;
    }
    void setAGE(int age)
    {
        this->age = age;
    }
    void setUID(int uid)
    {
        this->uid = uid;
    }
    string getNAME()
    {
        return name;
    }
    int getAGE()
    {
        return age;
    }
    int getUID()
    {
        return uid;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"University ID: "<<uid<<endl;
    }

};
class student : public person   //inheritance
{
    int marks;
    string grades;
    int courses;
    person Student1;     //composition-if object of student is distroyed person Student1 is also distroyed
public:
    student()
    {
        marks = 0;
        courses = 0;
    }
    student(int marks, string grades, int coures, person Student1)
    {
        this->marks = marks;
        this->grades = grades;
        this->courses = courses;
        this->Student1 = Student1;
    }
    void setMARKS(int marks)
    {
        this->marks = marks;
    }
    void setGRADES(string grades)
    {
        this->grades = grades;
    }
    void setCOURSES(int courses)
    {
        this->courses = courses;
    }
    void setSTUDENT(string name, int age, int uid)
    {
        Student1.setNAME(name);
        Student1.setAGE(age);
        Student1.setUID(uid);
    }
    int getMARKS()
    {
        return marks;
    }
    string getGRADES()
    {
        return grades;
    }
    int getCOURSES()
    {
        return courses;
    }
    person getSTUDENT()
    {
        return Student1;
    }
    void display()
    {
        cout<<"Student: "<<Student1.getNAME()<<" , "<<Student1.getAGE()<<" , "<<Student1.getUID()<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grades: "<<grades<<endl;
        cout<<"Courses: "<<courses<<endl;
         
    }
};
//Aggregation
class teacher: public person
{
    person *ptr;
public:
    teacher()
    {
        ptr = NULL;

    }
    teacher(person *p)
    {
        this->ptr = p;
    }
    void setTeacher(person *ptr)
    {
        this->ptr = ptr;
    }
    person* getTeacher()
    {
        return ptr;
    }
    void display()
    {
        ptr->display();
    }
    


};
int main()
{
    student s;
    string name = "Farzeen Shahid";
    s.setMARKS(445);
    s.setGRADES("A");
    s.setCOURSES(6);
    s.setSTUDENT("Farzeen Shahid", 20, 20102039);
    s.display();
    person p("Miss Farheen Faisal", 25, 20182039);
    teacher t(&p);
    //t.display();
    p.display();
    return 0;
}

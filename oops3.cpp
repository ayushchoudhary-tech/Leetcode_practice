#include<iostream>
using namespace std;
class Student{
    string name;
    float cgpa;
 public:
   
    void getPercentage()
    {
        cout<<(cgpa*10)<<"%"<<endl;
    }
    void setName(string s){
        name=s;
       // cout<<" student name is : "<<name ;
    }
    void setCgpa(float NewCgpa)
    {
        cgpa=NewCgpa;
    }void getName()
    {
        cout<<name<<endl;
    }

};
int main()
{
    Student s1;
   // s1.name="Ayush";
    
    s1.setName("Ayush");
    s1.setCgpa(7.1);
    s1.getName();
    s1.getPercentage();


    return 0;

}
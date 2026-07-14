#include<iostream>
using namespace std;
class Student{
    //properties
    string name;
    float cgpa ;
    //methods-->functions
    void getPercentage()
    {
        cout<<(cgpa*10)<<"%"<<endl;
    }
};
int main()
{
    Student S1;//object
    cout<<sizeof(S1);
    return 0;
}
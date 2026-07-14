#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
     string name;
     string color;
     Car(string name ,string color)
     {
        this->name=name;
        this->color=color; 
     }
     //creating custom copy constructor
     Car(Car &old)
     { cout<<"copy constructor invoked coppying c1 "<<endl;;
        name=old.name;
        color=old.color;
     }
};
int main()
{
    Car c1("maruti","white");
    Car c2(c1);
    cout<<c2.color<<endl;
    cout<<c2.name<<endl;
    

    return 0;
}

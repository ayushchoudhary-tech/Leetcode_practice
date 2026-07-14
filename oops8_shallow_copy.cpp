#include<iostream>
using namespace std;
class Car{
    public:
    string name,color;
    int *mileage;
    Car(string name, string color)
    {
        this->name=name;
        this->color=color;
     mileage=new int;//dynamic allocation
        *mileage=20;
    }
    Car(Car &old){
        cout<<"copy constructor is called"<<endl;
      name=old.name;
      color=old.color;
      mileage=old.mileage;
    }
};
int main()
{Car C1("merc", "black");
    Car C2(C1);
    cout<<C2.name<<C2.color<<*C2.mileage;
    return 0;
}
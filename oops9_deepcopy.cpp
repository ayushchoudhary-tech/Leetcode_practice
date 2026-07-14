#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string name,color;
    int * mileage;
    Car(string name,string color)
    {
        this->name=name;
        this->color=color;
        mileage=new int;
        *mileage=20;

    }
    Car( Car &original)
    {
        name=original.name;
        color=original.color;
        mileage=new int ;//new memory allocation ->deepcopy
        *mileage=*original.mileage;
        *mileage=32;
    }
};
int main()
{
    Car C1("Maruti","grey");
    Car C2(C1);
    cout<<C1.name<<endl;
    cout<<C2.name<<endl;
    cout<<C1.color<<endl;
    cout<<C2.color<<endl;
    cout<<*C1.mileage<<endl;
    cout<<*C2.mileage<<endl;
    return 0;
}
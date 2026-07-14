#include<iostream>
#include<string>
using namespace std;
class Car
{ public:
    string name;
    string color;
    int *mileage;
    Car(string name,string color)
    {
        this->name=name;
        this->color=color;
         mileage=new int;
         *mileage=10;

    }
    Car(Car &old)
    {
        name=old.name;
        color=old.color;
        mileage=new int;
        *mileage=*old.mileage;
        *mileage=30;
    }
    ~Car(){
        cout<<"delecting object .....";
        if(mileage!=NULL)
        {
            delete mileage;
            mileage=NULL;
        }
    }

};
int main()
{
    Car C1("maruti","yellow");
    Car C2(C1);
    cout<<C1.name<<endl;
    cout<<C1.color<<endl;
    cout<<*C1.mileage<<endl;
    cout<<C2.name<<endl;
    cout<<C2.color<<endl;
    cout<<*C2.mileage<<endl;
    return 0;

}

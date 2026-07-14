#include<iostream>
#include<string>
using namespace std;
class Car{
    string Make_Name;
    string color, Model_Name;
    public:
     Car(string Model_Name, string color){
        cout<<"constructer called : obj is created "<<endl;
        Make_Name="MARUTI";
        this->Model_Name=Model_Name;
        this->color=color;
     }
    
        void GetAllInfo()
        { cout<<"below is all information about the car "<<endl;
            cout<<"make name : "<<Make_Name<<endl;
            cout<<" Model of the car is : "<<Model_Name<<endl;
            cout<<" color of the car is : "<<color<<endl;
        }
    
};

int main()
{ Car c1("Ciaz","black");
    
    c1.GetAllInfo();
    return 0;

}

     


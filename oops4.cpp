#include<iostream>
#include<string>
using namespace std;
class Car{
    string Make_Name;
    string color, Model_Name;
    public:
     Car(){
        cout<<"constructer called : obj is created "<<endl;
        Make_Name="MARUTI";
     }
     void SetModel(string MName){
        Model_Name=MName;}
        void SetColor(string Color)
        {
            color=Color;
        }
        void GetAllInfo()
        { cout<<"below is all information about the car "<<endl;
            cout<<"make name : "<<Make_Name<<endl;
            cout<<" Model of the car is : "<<Model_Name<<endl;
            cout<<" color of the car is : "<<color<<endl;
        }
    
};

int main()
{ Car c1;
    c1.SetModel("Celerio");
    c1.SetColor("grey");
    c1.GetAllInfo();
    return 0;

}

     


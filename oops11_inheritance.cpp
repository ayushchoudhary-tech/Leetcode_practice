#include<iostream>
#include<string>
 using namespace std;
 class Animal
{public:
    string color;
   void  eats()
    {
        cout<<"eats"<<endl;

    }
   void  breathe()
    {
        cout<<"breathes"<<endl;
    }

};
class Fish:public Animal
{
    public:
    int fins;
   void  Swim()
    {
        cout<<"swiming"<<endl;
    }
  void  dive()
    {
        cout<<"goin deeper"<<endl;
    }
};
int main()
{
    Animal A1;
    A1.color="red";
    cout<<A1.color<<endl;
    Fish F1;
    F1.color="grey";
    cout<<F1.color<<endl;
    F1.fins=2;
    F1.Swim();
    F1.eats();
    F1.breathe();
    cout<<F1.fins;

    return 0;
}
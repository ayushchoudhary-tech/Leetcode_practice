#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
 void eats()
 {
    cout<<"eating\n";
 }
 void breathe()
 {
    cout<<"breathes\n";
 }
} ;
class Mamal:public Animal{
    public:
    string bloodtype;
    Mamal()
    {
        bloodtype="warm";
    }


};
class Dog:public Mamal{
 public:
 void tailwag()
 {
    cout<<"a dog waging its tail\n";
 }
};


int main()
{
    Dog D1;
    cout<<D1.bloodtype<<endl;
    D1.eats();
    D1.breathe();
    D1.tailwag();
    return 0;

}
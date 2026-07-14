#include<iostream>
using namespace std;
class User{
    //by default private
    int id;
    string username;
    string password;
    string bio;
    void Deactivate()
    {
        cout<<"deleting  accout"<<endl;
    }
    void EditBio(string NewBio)
    {
        bio=NewBio;
    }
};
int main()
{
    User u1;

}
//oops practice question
#include<iostream>
#include<string>
using namespace std;
class User{
    private: int id;
    string Password;
    public:
     string UserName;
    User(int id ){
        this->id=id;
        cout<<"object made";
    }
    void SetPassword(string Password)
    {
        this->Password=Password;
    }
    void GetPassword()
    {
        cout<<" password is: "<<Password<<endl;
    }
    void getinfo()
    {
        cout<<"userid is "<<id<<endl;
    }


};
int main()
{
    User U1(1);//U2;
    U1.UserName="Ayush";
    U1.SetPassword(" 1234");
    U1.GetPassword();
    U1.getinfo();
    cout<<U1.UserName;
   //User U3(1);
    

 return 0;
}

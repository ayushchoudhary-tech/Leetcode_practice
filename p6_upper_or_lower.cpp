#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter the char";
    cin>>c;
    /*if( c>='a'&& c<='z')
    {
         cout<<"the char enterd is lowercase\n";
 }
     else 
     cout<<"the char is  uppercase";*/
     if(c>=65 && c<=90)
     {
        cout<<"char is a upper case";

     }
     else 
     cout<<"char is a lower case";
     return 0; 
} 
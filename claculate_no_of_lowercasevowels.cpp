// to calculate the no of small case vowels used in string
#include<iostream>
#include<string>
using namespace std;
void LcaseVowel(string str)
{ int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        
    }
    cout<<count;


}
int main()
{
    string  str1;
    cout<<"enter a string ";
    getline(cin,str1);
    LcaseVowel(str1);
    return 0;

}
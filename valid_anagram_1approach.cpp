#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1="anagram",str2="nagaram";
    sort(str1.begin(),str1.end());
   sort(str2.begin(),str2.end());
   
   if(str1==str2)
    { cout<<"valid anagram";
       
    }else{
        cout<<"not a valid anagram";
    }
 
   return 0;
}

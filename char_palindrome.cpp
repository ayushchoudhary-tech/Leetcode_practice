//valid palindrome
#include<iostream>
#include<cstring>
using namespace std;
void IsPalindrome(char word[],int n)
{ int st=0,end=n-1;
   while(st<end)
    {
        if(word[st]!=word[end])
        {  cout<<false;
            break; 

        }else{
            cout<<true;break;
        }
    }

}
int main()
{
    char word[]="madam";
    IsPalindrome(word,strlen(word));
    return 0;

}
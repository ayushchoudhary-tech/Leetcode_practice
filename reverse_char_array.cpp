// Reverse Char ARRAY
#include<iostream>
#include<cstring>
using namespace std;
void Reverse(char word[],int n){
    int st=0,end=n-1;
    cout<<"function called"<<endl;
    while(st<=end)
    { swap(word[st],word[end]);
        st++;
        end--;}
    cout<<word;

}
int main()
{
    char word[]="Ayush";
    Reverse(word,strlen(word));
    return 0;
}
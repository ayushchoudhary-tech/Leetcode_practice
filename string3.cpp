#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char sentence[30];
    cout<<"enter the sentence ";
    cin.getline(sentence,30,'*');
    cout<<"your line was :"<<sentence<<endl;
    cout<<strlen(sentence);
    return 0;
}
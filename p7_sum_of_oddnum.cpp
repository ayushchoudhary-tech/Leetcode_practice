#include<iostream>
using namespace std;
int main()

{int n;
    int oddSum=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i+=2)
    {
        oddSum+=i;
    }
    cout<<"sum of all oddnumber form 1 to "<<n<<" is "<<oddSum<<"\n";
    return 0;
}
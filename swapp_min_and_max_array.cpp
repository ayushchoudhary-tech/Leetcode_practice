#include<iostream>
#include<climits>
using namespace std;
void excange(int arr[],int size){
    int small=INT_MAX;
    int large=INT_MIN;
    for(int i=0;i<size;i++)
    {
    small=min(arr[i],small);
    large==max(arr[i],large);
    }
    swap(small,large);


}


int main(){
 int num[]={12,3,54,65,34,66,2};

    int size =7;
    excange(num,size);
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}

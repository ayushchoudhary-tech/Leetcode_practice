#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> vec={1,2,3,4,5};
   /*
 for(int val:vec){
    cout<<val<<endl;
   }
   cout<<"size of vector is = "<<vec.size()<<endl;
   //pushback->adds element at the end of the vector
    vec.push_back(10);
    for(int val:vec){
        cout<<val<<endl; 
    }
    cout<<"size of vector is = "<<vec.size()<<endl;
    //pop_back->used to delete the last element from the vector
    vec.pop_back();
     for(int val:vec){
        cout<<val<<endl; 
    }*/
    cout<<"size of vector is = "<<vec.size()<<endl;
    cout<<vec[0]<<endl;
    cout<<vec.at(0)<<endl;
   return 0;
}

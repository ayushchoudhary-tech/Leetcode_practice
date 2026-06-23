//linear search in vector
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num={1,2,3,4,5};
    int target=4;
    bool found=false;
    int index=0;

{   for(int val:num)
    { if(val==target)
        {
            cout<<"element found "<<index<<"value "<<val;
        found=true;
            break;
        }
     index++;
    }
}
if(!found)
 {
    cout<<"element not found"<<endl;
 }

    return 0;
}
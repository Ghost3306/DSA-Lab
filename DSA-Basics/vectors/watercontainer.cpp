#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int low = 0,high=height.size()-1;
    int maxcap = 0;
    while(low<high){
        //maxcap = max(maxcap,height[low]-height[high]);
        int ht = min(height[low],height[high]);
        int wd = high-low;
        maxcap = max(maxcap,ht*wd);
        if(height[low]<height[high]){
            low++;
        }else{
            high--;
        }
       
    }
    
    cout<<maxcap;
}
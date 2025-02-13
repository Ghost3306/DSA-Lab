#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={2,7,11,15};
    int target = 9;
    int st=0,end=nums.size()-1;
    while(st<end){
        if(nums[st]+nums[end]>target){
            end--;
        }
        if(nums[st]+nums[end]<target){
            st++;
        }
        if(nums[st]+nums[end]==target){
            cout<<nums[st]<<" + "<<nums[end]<<" = "<<target;
            break;
        }
    }







    // for(int i = 0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==13){
    //             cout<<i<<" "<<j;
    //         }
    //     }
    // }
    return 0;
}
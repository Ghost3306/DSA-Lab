#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {5,5,0,5,0,2,2,2,2,2,2};
    int n = nums.size();
    int ans = 0,freq=0;
    for(int i = 0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    cout<<"majority element is "<<ans;
    return 0;
}
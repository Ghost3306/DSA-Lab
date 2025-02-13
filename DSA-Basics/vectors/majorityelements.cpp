//Moore's voting
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,5,0,5,0,1,1,1,1,1,1};
    
    
    sort(nums.begin(),nums.end());
    
    cout<<endl;
    int freq = 1,ans = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
            
        }
        if(freq>nums.size()/2){
            cout<<ans;
            break;
        }
    }
  
    cout<<ans;
    return 0;
}
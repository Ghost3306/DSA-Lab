#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums ={4,3,2,7,8,1};
    int low = 0,high=nums.size()-1;
    cout<<"Without sort : ";
    for(int i:nums){
        cout<<i<<" ";
    }
    for(int i =0;i<nums.size()-1;i++){
        for(int j = 0;j<nums.size()-1;j++){
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
        
       
    cout<<"\nAfter sorting : ";
    for(int i:nums){
        cout<<i<<" ";
    }

}
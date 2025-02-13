#include<iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    vector<int> nums ={4,3,2,7,8,2,3,1};
    unordered_set<int> seen(nums.begin(),nums.end());
    vector<int> notav;
    for(int i=1;i<=nums.size();i++){
        if(!seen.count(i)){
           notav.push_back(i);
        }
    }
    
    
    return 0;
}
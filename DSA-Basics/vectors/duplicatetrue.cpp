#include<iostream>
#include<vector>
#include<unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,2,2,3};
    unordered_set<int> seen;
        for(int i : nums){
            if(seen.count(i)){
                return true;
            }
            seen.insert(i);
        }
        return false;
    return 0;
}
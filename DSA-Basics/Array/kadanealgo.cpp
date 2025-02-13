#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={-1};
    int sum=0,maxsum=INT8_MIN;
    for(int i :nums){
        sum+=i;
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
}
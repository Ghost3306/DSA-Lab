#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int mp = 0;
    int bestbuy = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestbuy){
            mp = max(mp,prices[i]-bestbuy);
        }
        bestbuy= min(bestbuy,prices[i]);
    }
    cout<<mp;
    cout<<bestbuy;
    return 0;
}
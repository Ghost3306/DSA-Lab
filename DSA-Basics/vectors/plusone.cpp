#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> digits = {9,8,7,6,5,4,3,2,1,0};
    int size = digits.size();
    int s = size;
    int number = 0;
    for(int j = 0;j<size;j++){
        int mod = 1;
        for(int i = 1;i<s;i++){
            mod = mod * 10;
        }
        number = number + (digits[j]*mod);
        s--;
    }
    number++;
    int count=to_string(abs(number)).length();
   
    int cp = count;
    vector<int> nv;
    for(int k = 0;k<count;k++){
        //cout<<"h"<<endl;
        int merger = 1;
        
        for(int k1=1;k1<cp;k1++){
            merger=merger*10;
        }
        
        int digit = number/merger;
        
        number=number%merger;
        nv.push_back(digit);
        cp--;
        
    }
    
    for(int i:nv){
        cout<<i<<" ";
    }


}
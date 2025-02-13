#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector  <int> vec = {2,2,5,6,6,7,9};
    
    for(int i: vec){
        int count=0;
        for(int j:vec){
            if(i==j){
                count++;
            }
        }
        if(count==1){
            cout << i << " ";
        }
    }

    return 0;
}
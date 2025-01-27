#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = {12,12,11,14,2};
    int res = 0;
    for(int i=0;i<size;i++){
        int res = 0;
        for(int j=0;j<size;j++){
            
            if(arr[i]==arr[j] && i!=j){
                
                res=1;
            }
        }
        
        if(res==0){
            cout<<arr[i]<<" ";
        }
    }

    
    return 0;
}
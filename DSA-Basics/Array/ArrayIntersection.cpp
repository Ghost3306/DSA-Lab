#include <iostream>
using namespace std;
int main(){
    int size = 5,size1=4;
    int arr[size] = {12,45,11,14,2};
    int arr1[size1]={12,14,1,5};  
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr[i]==arr1[j]){
               cout<<arr[i]<<" ";
            }
        }
        
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int size = 6;
    int arr[size] = {15,26,45,88,99,77};
    int low=0,high=size-1;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    while(low<high){
        // swap(arr[low],arr[high]);
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }  
    cout<<"\nAfter reverse : ";  
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

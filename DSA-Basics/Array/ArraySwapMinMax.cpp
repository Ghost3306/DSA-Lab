#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = {12,45,11,14,2};
    int min=arr[0],max=arr[0];
    int minin=0,maxin=0;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            minin=i;
        }
        if(arr[i]>max){
            max = arr[i];
            maxin=i;
        }
    }
    int temp = arr[minin];
    arr[minin] = arr[maxin];
    arr[maxin]=temp;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
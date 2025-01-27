#include <iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size = 5;
    int target = 263;
    int arr[size] = {15,26,45,88,96};
    int res = linearsearch(arr,size,target);
    if(res==-1){
        cout<<"Target not found!";
    }else{
        cout<<"Target found at index"<<res;
    }
    return 0;
}
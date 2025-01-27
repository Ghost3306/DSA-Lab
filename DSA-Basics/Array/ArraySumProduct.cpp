#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = {12,45,11,14,2};
    int sum = 0,product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }

    cout<<"Sum : "<<sum<<" Product : "<<product;
    return 0;
}
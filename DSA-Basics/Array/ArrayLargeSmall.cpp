#include <iostream>
using namespace std;
int main(){
    int size = 6;
    int arr[size];
    cout<< "Enter Element : "<<endl;
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    cout<<"Array : ";
    for(int i = 0;i<size;i++){
        cout << arr[i]<< " ";
    }
    int small = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i] <= small){
            small=arr[i];
        }
    }

    int large = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i] >= large){
            large=arr[i];
        }
    }
    cout <<endl<< "Smallest : "<<small<<" Largest : "<<large;
 
    return 0;
}
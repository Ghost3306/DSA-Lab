#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {1,2,3,4,5};
    // for(int st=0;st<n;st++){
    //     for(int end=st;end<n;end++){
    //         int sum=0;
    //         for(int i=st;i<=end;i++){
    //             //cout << arr[i];
    //             sum+=arr[i];
    //         }
    //         cout<<sum<<" ";
    //         //cout<<" ";

    //     }
    //     cout<<endl;
    // }
    int max = 0;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
        }
        if(sum>=max){
            max=sum;
        }
    }
    cout<<max;
}
#include<iostream>
using namespace std;

int main(){
    double x = 3;
    int n = 5;
    long binForm=n;
    double ans=1;
    
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }

    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm /= 2;
    }
    cout<<ans;
    return 0;
}
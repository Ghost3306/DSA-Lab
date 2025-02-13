#include <iostream> 
using namespace std;
#include <vector>
int main(){
    // vector <int> vec(3,1);//size =3 default =1
    vector <int> vec={1,2,3};
    vec.push_back(25);
    vec.push_back(30);
    //cout << vec[0];
    for(int i:vec){
        cout << i << endl;
    }
    // vector <char> vech = {'a','b','c','d','e'};
    cout << "size = " <<vec.size() << endl;
    vec.pop_back();
    for(int i:vec){
        cout << i << endl;
    }

    cout << vec.front() << endl;

    cout << vec.back() << endl;
    cout << vec.at(2) << endl;
    // for(char c:vech){
    //     cout << c << endl;
    // }
    return 0;
}
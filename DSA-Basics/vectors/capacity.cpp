#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(78);
    vec.push_back(71);
    vec.push_back(88);
    vec.push_back(45);
    vec.push_back(21);
    cout << vec.size() << endl;
    cout<< vec.capacity() <<endl;
    /*every time we push back to vector if there is no space in vector then it 
    will duplicate the size of vector and paste existing element and append next element*/

    return 0;
}
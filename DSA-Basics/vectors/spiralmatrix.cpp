#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> res;
    int left=0,right=matrix[0].size()-1,top=0,bottom=matrix.size()-1;
     
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            res.push_back(matrix[top][i]);
           
        }
        top++;
         
        for(int i = top;i<=bottom;i++){
            res.push_back(matrix[i][right]);
            
        }
        right--;
         
        if(top<=bottom){
            for(int i = right;i>=left;i--){
                res.push_back(matrix[bottom][i]);
                
            }
            bottom--;
        }
         

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                res.push_back(matrix[i][left]);
               
            }
            left++;
        }
        
        
    }
    for(int j:res){
        cout<<j<<" ";
    }
    return 0;
}
//[1,2,3,4,8,12,11,10,9,5,6,7]
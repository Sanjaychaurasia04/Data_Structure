#include<iostream>
#include<vector>
using namespace std;

void setmatrix(vector<vector<int>>matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int  i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j] ==0){
                while(i-- ||i++){
                    matrix[i][j] =0;
                }
                while(j-- ||j++){
                    matrix[i][j] =0;
                }
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>>arr {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setmatrix(arr);

    return 0;
}
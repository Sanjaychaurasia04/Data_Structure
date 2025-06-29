#include<iostream>
#include<vector>

using namespace std;
/*
PASCALS TRIANGLE 

1  
1  1
1  2  1
1  3  3  1
1  4  6  4  1

*/
void pascals(int num){
    vector<vector<int>>ans;

    for(int i =0;i<num;i++){
        ans.push_back(vector<int>(i+1));
        for(int j =0;j<i+1;j++){
            if(j ==0 || j==i){
                ans[i][j] = 1;

            }
            else{
                ans[i][j] = ans[i-1][j]+ ans[i-1][j-1];
            }
        }
    }
    for(int  i=0;i<ans.size();i++){
        for(int j =0;j<i+1;j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }

}


int main(){
    int num =5;
    pascals(num);


    return 0;
}
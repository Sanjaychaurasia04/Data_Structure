#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> nums){
    for(int i =0;i<nums.size();i++){
        for(int j = 0;j<i;j++){
            swap(nums[i][j] ,nums[j][i]);
        }
    }
    for(int i =0;i<nums.size();i++){
        reverse(nums[i].begin() ,nums[i].end());
    }
    for(int i =0;i<nums.size();i++){
        for(int j = 0;j<nums[0].size();j++){
            cout<<nums[i][j] <<"  ";
        }
        cout<<endl;
    }

}

int main(){
    vector<vector<int>>arr {{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);

    return 0;
}
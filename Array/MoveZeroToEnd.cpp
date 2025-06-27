#include<iostream>
#include<vector>

using namespace std;

void MoveZero(vector<int>nums){
    int temp =0;
    for(int i =0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i] ,nums[temp++]);
        }
    }
    for(int i = 0;i<nums.size();i++){
        cout<<nums[i]<<"  ";
    }
}

int main(){
    vector<int>arr{1,3,0,5,0,2,0,5,0};
    MoveZero(arr);

    return 0;
}
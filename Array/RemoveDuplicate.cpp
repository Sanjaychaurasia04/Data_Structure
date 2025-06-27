#include<iostream>
#include<vector>
using namespace std;

void RemoveDuplicate(vector<int>nums){
    int temp =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != nums[temp]){
            temp++;
            swap(nums[i] ,nums[temp]);
        }
    }
    for(int i = 0;i<nums.size();i++){
        if(i<=temp){
            cout<<nums[i]<<" ";
        }
        else{
            cout<<"_"<<" ";
        }
    }

}


int main(){
    vector<int>arr{1,2,2,3,3,4,4,4,6,7,6,6,8,8,6,6};
    RemoveDuplicate(arr);

    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextpermution(vector<int>& nums){
    int index1 =-1;
    int n = nums.size();

    for(int i =n-1;i>=1;i--){
        if(nums[i] >nums[i-1]){
            index1 = i-1;
            break;
        }
    }
    if(index1 == -1){
        reverse(nums.begin() ,nums.end());
    }
    else{
        int index2 = -1;
        for(int i = n-1;i>=index1;i--){
            if(nums[i]>nums[index1]){
                index2 = i;
                break;
            }
        }
        swap(nums[index1] ,nums[index2]);
        reverse(nums.begin() +index1 +1 ,nums.end()); 
    }
    
}
void Print(vector<int>nums){
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<"   ";
    }
}

int main(){
    vector<int> arr {3,2,1 ,4,5};
    nextpermution(arr);
    Print(arr);

    return 0;
}
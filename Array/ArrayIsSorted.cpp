#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//brute approach
bool IsSorted(vector<int>nums){
    for(int i =0;i<nums.size()-1;i++){
        
        for(int j =i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                return false;
            }
        }
    }
    return true;
}

bool isSorted(vector<int>nums){
    int temp =INT_MIN;
    for(int i =0;i<nums.size();i++){
        if(nums[i]<temp){
            return false;
        }
        temp = nums[i];
    }
    return true;
}

int main(){
    vector<int>arr {1,4,5,6,7};
    vector<int>arr2 {5,4,6,7,8};
    bool ans = IsSorted(arr2);
    cout<<"Array is Sorted :"<<isSorted(arr)<<endl;
    cout<<ans;

    return 0;
}
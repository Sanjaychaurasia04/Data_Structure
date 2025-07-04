#include<iostream>
#include<vector>
using namespace std;

/*
Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
*/

int firstoccurance(vector<int>nums ,int target){
    int s = 0;
    int e = nums.size()-1;
    int ans = -1;
    while(s<=e){
        int mid  =s+(e-s)/2;
        if(nums[mid] == target){
            ans = mid;
            e = mid-1;

        }
        else if(nums[mid]>target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    return ans;
}

int lastOccurance(vector<int> nums ,int target){
    int s = 0;
    int e =nums.size()-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            ans = mid;
            s = mid+1;
        }
        else if(nums[mid]>target){
            e= mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr{5,7,7,8,8,8,8,8,10};
    vector<int>ans(2);
    int target = 8;
    ans[0] = firstoccurance(arr ,target);
    ans[1] = lastOccurance(arr , target);
    cout<<"fist occurance is : "<<ans[0] <<" , last occurance is : "<<ans[1]<<endl;
    return 0;
}
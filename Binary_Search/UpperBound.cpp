#include<iostream>
#include<vector>

using namespace std;
/*
Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.
*/
void uppperBound(vector<int>nums ,int target){
    int s = 0;
    int e = nums.size();
    int ans = 0;

    while(s<=e){
        int  mid  =s+(e-s)/2;
        if(nums[mid] >target){
            ans =mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout<<ans;
}

int main(){
    vector<int>arr {1,2,2,3};
    uppperBound(arr ,2);

    return 0;
}
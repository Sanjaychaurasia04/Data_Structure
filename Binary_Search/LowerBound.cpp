#include<iostream>
#include<vector>

using namespace std;
/*
The  lower bound algorithm finds the first or the smallest index in a sorted array where the value
at that index is greater than or equal to a given key i.e. x.

The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not 
found, the lower bound algorithm returns n i.e. size of the given array.
*/

void lowerBound(vector<int>& nums ,int target){
    int s =0;
    int ans =0;
    int e = nums.size();
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid] >=target){
            ans = mid;
            e = mid-1;
            
        }
        else{
            s = mid+1;
        }
    
    }
    cout<<ans;
}

int main(){
    vector<int>arr {3,5,8,15,19};
    lowerBound(arr ,9);

    return 0;
}
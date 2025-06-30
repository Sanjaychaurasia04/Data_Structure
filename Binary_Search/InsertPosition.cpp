#include<iostream>
#include<vector>
using namespace std;

int insertPosition(vector<int>nums ,int target){
    int s  =0;
    int e =nums.size()-1;
    int ans =0;
    if(nums[e] <target) return e+1;

    while(s<=e){
        int mid  = s+ (e-s)/2;
        if(nums[mid]>=target){
            e = mid-1;
            ans = mid;
        }
        else{
            s =mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr {1,3,5,6};
    int ans = insertPosition(arr ,7);
    cout<<ans;
    return 0;
}
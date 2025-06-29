#include<iostream>
#include<vector>
using namespace std;

int  nearlysorted(vector<int> nums ,int target){
    int s = 0;
    int e= nums.size();

    while(s<=e){
        int mid = s+ (e-s) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid-1] == target){
            return mid-1;
        }
        else if(nums[mid+1] == target){
            return mid+1;
        }
        else if(nums[mid] >target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{20,10,30,50,40,70,60};
    int ans = nearlysorted(arr ,40);
    cout<<ans;

    return 0;
}
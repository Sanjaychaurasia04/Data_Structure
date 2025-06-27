#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//brute approach
void SecondlargestAndSmallest(vector<int>nums){
    int maxi  =INT_MIN;
    int mini = INT_MAX;
    for(int i =0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
        else if(nums[i]<mini){
            mini = nums[i];
        }
    }
    int slargest = INT_MIN;
    int sSmallest = INT_MAX;

    for(int i =0;i<nums.size();i++){
        if(nums[i]>slargest && nums[i] <maxi){
            slargest = nums[i];
        }
        if(nums[i]<sSmallest && nums[i]>mini){
            sSmallest = nums[i];
        }
    }
    cout<<"secondLargest number is :"<<slargest<<endl;
    cout<<"secondSmallest number is :"<<sSmallest;
    
}


int main(){
    vector<int>arr ({1,3,-70,200,90,-2,-6});
    SecondlargestAndSmallest(arr);

    return 0;
}
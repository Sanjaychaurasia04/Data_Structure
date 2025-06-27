#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//KADANS ALGORITHM

void maxiSubarray(vector<int>nums){
    int maxi = INT_MIN;
    int sum =0;
    for(int i =0;i<nums.size();i++){
        sum += nums[i];
        if(sum >maxi){
            maxi = sum;
        }
        if(sum<0){
            sum =0;
        }
    }
    cout<< maxi;
}

int main(){
    vector<int>arr {-2,1,-3,4,-1,2,1,-5,4};
    maxiSubarray(arr);

    return 0;
}
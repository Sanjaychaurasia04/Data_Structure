#include<iostream>
#include<vector>

using namespace std;
int missing(vector<int>nums){
    int n = nums.size();
    int sum =0;
    int sum1 = n*(n+1) /2;
    for(int i=0 ;i<nums.size();i++){
        sum+=nums[i];
    }
    int ans = sum1  - sum;
    return ans;
}

int main(){
    vector<int>arr{9,6,4,2,3,5,7,0,1};
    int ans = missing(arr);
    cout<<ans;

    return 0;
}
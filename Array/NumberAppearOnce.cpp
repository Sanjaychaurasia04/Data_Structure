#include<iostream>
#include<vector>
using namespace std;

int numberAppearOnce(vector<int> nums){
    int ans = 0;
    for(int i =0;i<nums.size();i++){
        ans ^= nums[i];
    }
    return ans;
}

int main(){
    vector<int>arr {4,8,4,1,2,1,2};
    cout<<numberAppearOnce(arr);

    return 0;
}
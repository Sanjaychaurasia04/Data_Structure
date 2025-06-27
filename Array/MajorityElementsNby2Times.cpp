#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//brute approach 
// COMPLEXITY IS O(N* log(N))
void majority(vector<int>nums){
    sort(nums.begin() ,nums.end());
    cout<<nums[nums.size()/2 +1];

}

void majority1(vector<int>nums){
    int count =0;
    int prev;
    for(int  i=0;i<nums.size();i++){
        if(count ==0){
            count++;
            prev =nums[i];

        }
        else if(prev == nums[i]) count++;
        else{
            count--;
        }
    }
    cout<<prev;
}


int main(){
    vector<int>arr{1,1,2,2,1,1,1,2,2};
    majority1(arr);

    return 0;
}
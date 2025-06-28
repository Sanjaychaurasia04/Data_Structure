#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;
// BRUTE SOLUTION 
int LCS(vector<int>nums){
    sort(nums.begin() ,nums.end());
    int currlen =1;
    int globallen = 1;
    for(int i =1;i<nums.size();i++){
        if(nums[i] == nums[i-1]){
            continue;
        }
        else if(nums[i] -1 == nums[i-1]){
            currlen++;


        }
        else{
            globallen = max(globallen , currlen);
            currlen = 1;
        }
    }
    globallen  = max(globallen ,currlen);
    return globallen;
}
 
// OPTIMAL SOLUTION WITHOUT SOTING . USING THE UNORDERED_SET

int lowestCommonSubsequence(vector<int>nums){
    int n = nums.size();
    int globallen = 0;
    unordered_set<int>st;

    for(int i :nums){
        st.insert(i);
    }

    for(int i : st){
        if(!st.count(i-1)){
            int currlen = 1;
            int currnum = i;
            while(st.count(currnum +1)){
                currlen++;
                currnum++;
            }
            globallen = max(globallen ,currlen);
        }
    }
    return globallen;

}
int main(){
    vector<int>arr {0,3,7,2,5,8,4,6,0,1};
    int ans =LCS(arr);
    cout<<ans <<endl;

    int ans1 = lowestCommonSubsequence(arr);
    cout<<"OPTIMAL ANS : "<<ans1;

    return 0;
}
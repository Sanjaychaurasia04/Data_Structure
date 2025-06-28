#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void leaderArray(vector<int>& nums){
    int n =nums.size();
    int currleader = nums[n-1];
    vector<int>ans;
    ans.push_back(nums[n-1]);

    for(int i =n-2;i>=0;i--){
        if(nums[i] >= currleader){
            currleader = nums[i];
            ans.push_back(nums[i]);
        }
    }
    reverse(ans.begin(),nums.end());
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<"   ";
    }

}

int main(){
    vector<int>arr {10, 22, 12, 3, 0, 6};
    leaderArray(arr);

    return 0;
}
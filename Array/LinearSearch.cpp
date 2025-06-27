#include<iostream>
#include<vector>

using namespace std;
bool LinearSearch(vector<int>nums ,int k){
    for(int i =0;i<nums.size();i++){
        if(nums[i] == k){
            return true;
        }
    }
    return false;


}

int main(){
    vector<int>nums{1,4,6,3,6,7,2};
    bool ans = LinearSearch(nums,3);
    if(ans ==1) cout<<"Found ";
    else cout<<"Not Found";

    return 0;
}
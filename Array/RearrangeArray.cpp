#include<iostream>
#include<vector>
using namespace std;

void rearrangeArray(vector<int> nums) {
    int posindex = 0;
    int negindex = 1;
    vector<int>ans(nums.size());
    for(int i =0;i<nums.size();i++){
        if(nums[i]>0){
            ans[posindex] = nums[i];
            posindex +=2;
        }
        else{
            ans[negindex] =nums[i];
            negindex +=2;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
        
}

int main(){
    vector<int>arr {1,2,-4,-5,3,4};
    rearrangeArray(arr);

    return 0;
}
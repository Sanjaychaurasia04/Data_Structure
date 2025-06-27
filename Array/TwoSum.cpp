
#include <iostream>
#include <vector>

using namespace std;
//BRUTE SOLUTION OF THE TWO SUM IN THIS THE TIME COMPLEXITY IS O(N^2)
vector<int> Twosum(vector<int> nums ,int sum){
    vector<int>ans;
    for(int i =0;i<nums.size();i++){
        for(int j =i+1;j<nums.size();j++){
            if(nums[i] +nums[j] == sum){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
}

//OPTIMAL APPROACH USING THE TWO POINTER APPROACH

vector<int> twosum1(vector<int>& nums ,int sum){
    int start =0;
    int end = nums.size()-1;
    vector<int>ans;
    while(start<=end){
        if(nums[start] +nums[end] >sum){
            end--;
        }
        else if(nums[start] + nums[end] == sum){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else{
            start++;
        }
    }
    return {-1,-1};
}

int main(){
    vector<int>arr1 {3,2,4};
    vector<int>ans = Twosum(arr1 ,6);
    cout<<ans[0] <<"  "<<ans[1]<<endl;

    vector<int>ans2 = twosum1(arr1 ,13);
    cout<<ans[0] <<"  "<<ans[1];


    return 0;

}
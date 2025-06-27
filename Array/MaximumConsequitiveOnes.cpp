#include<iostream>
#include<vector>

using namespace std;

int maximumConsequitiveones(vector<int>nums){
    int temp = 0;
    int count =0;
    int maxi =0;
    for(int i =0;i<nums.size();i++){
        if(nums[i] ==1){
            count++;
        }
        
        else{
            count = 0;
        }
        maxi = max(maxi,count);
    }

    return maxi;
}

int main(){
    vector<int>arr {1, 1, 0, 1, 0,1,1,1,0,0,1,1,1,1, 1};
    cout<<maximumConsequitiveones(arr);

    return 0;
}
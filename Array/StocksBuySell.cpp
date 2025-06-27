#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//BRUTE SOLUTION O(N^2) TIME COMPLEXITY

void stocks(vector<int>nums){
    int maxi =0;
    
    for(int  i= 0;i<nums.size();i++){
        int sum = 0;
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]<nums[j]){
                sum = nums[j] -nums[i];
                maxi = max(maxi , sum);
            }
        }
    }
    cout<<maxi;
}

//OPTIMISED SOLUTION

void stock1(vector<int>nums){
    int maxi = 0;
    int mini = INT_MAX;
    int temp =0;
    for(int  i=0;i<nums.size();i++){
        mini = min(mini ,nums[i]);
        maxi = max(maxi ,nums[i] -mini);
        
    }
    cout<<maxi;
}
int main(){
    vector<int>arr{7,1,5,3,6,4};
    stocks(arr);
    cout<<"optimized solution ans : "<<endl;
    stock1(arr);


    return 0;
}
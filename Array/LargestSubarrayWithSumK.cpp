#include<iostream>
#include<vector>

using namespace std;

int largestsubarray(vector<int>& nums ,int k){
    int maxlen = 0;
    for(int i=0;i<nums.size();i++){
        int sum =0;
        for(int j =i;j<nums.size();j++){
            sum += nums[j];
             if(sum == k){
                maxlen = max(maxlen,j-i+1);
            }

            
        }
       
    }
    return maxlen;
}

/*
OPTIMAL APPROACH 

Time Complexity: O(2*N) ~~ O(N)

Space Complexity: O(1) as we are not using any extra space.
*/

int LargestSubarray(vector<int>& nums ,int k){
    int right =0;
    int left = 0;
    int sum =nums[0];
    int maxlen = 0;
    int n = nums.size();
    while(right<=n){
        while(left<=right && sum>k){
            sum -= nums[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            
            sum +=nums[right];
        }
        
    }
    return maxlen;
}

int main(){
    vector<int>arr{2,3,3,5,5,1,9};
    int ans = LargestSubarray(arr ,10);
    cout<<"Brute solution :"<<largestsubarray(arr,10) <<endl;
    cout<<"OPTIMAL SOLUTION "<<ans;

    return 0;
}
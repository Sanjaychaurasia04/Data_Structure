#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//brute approach
bool IsSorted(vector<int>nums){
    for(int i =0;i<nums.size()-1;i++){
        
        for(int j =i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                return false;
            }
        }
    }
    return true;
}

bool isSorted(vector<int>nums){
    int temp =INT_MIN;
    for(int i =0;i<nums.size();i++){
        if(nums[i]<temp){
            return false;
        }
        temp = nums[i];
    }
    return true;
}

//optimal approach

/*

Complexity Analysis

Time Complexity: O(N)

Space Complexity: O(1)

*/
bool isSortedArray(vector<int>nums){
    
    for(int i =1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            return false;
        }
    }
    return true;
}

bool sortedRotatedArray(vector<int>nums){
    int count =0;
    for(int  i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            count++;
        }
    }
    if(nums[nums.size()-1] >nums[0]) count++;

    return count<=1;
}

int main(){
    vector<int>arr {1,4,5,6,7};
    vector<int>arr2 {5,4,6,7,8};
    vector<int>arr3 {3,4,5,1,2};
    bool ans = IsSorted(arr2);
    cout<<"Array is Sorted :"<<isSortedArray(arr)<<endl;
    cout<<ans<<endl;
    cout<<"sortedRotatedArray : "<<sortedRotatedArray(arr3);

    return 0;
}
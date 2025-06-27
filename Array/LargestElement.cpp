#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int largest(vector<int>nums){
    int maxi =INT_MIN;
    for(int i= 0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
    }
    return maxi;
}
int main(){
    vector<int>arr({1,2,3,2,6,9,3,8,45});
    int ans = largest(arr);
    cout<<"ans is :" <<ans<<endl;
    

}
#include<iostream>
#include<vector>
using namespace std;

void subarraySum(vector<int>nums ,int k){
    
    int count  =0;
    
    for(int i =0;i<nums.size();i++){
        for(int j =i;j<nums.size();j++){
            int sum =0;
            for(int k = i;k<=j;k++){
                sum += nums[k];
            }
            if(sum ==k){
                count++;
            }

        }
    }
    cout<<count<<endl;
}

void subarry(vector<int>nums ,int k){
    int count  =0;
    for(int i =0;i<nums.size();i++){
        int sum =0;
        for(int j =i;j<nums.size();j++){
            sum +=nums[j];
            if(sum ==k) count++;

        }
    }
    cout<<count;
}
int main(){
    vector<int>arr {1,2,3};
    subarraySum(arr ,3);
    subarry(arr ,3);
    return 0;
}
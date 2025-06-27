#include<iostream>
#include<vector>

using namespace std;
void sort1(vector<int>nums){
    int zcount = 0;
    int Ocount = 0;
    int Tcount = 0;
    for(int i =0;i<nums.size();i++){
        if(nums[i] ==0) zcount++;
        else if(nums[i] ==1) Ocount++;
        else Tcount++;
    }
    int i =0;
    while(zcount--){
        nums[i++] = 0;
    }
    while(Ocount--){
        nums[i++] =1;
    }
    while(Tcount--){
        nums[i++] =2;
    }

    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<"  ";
    }
}

//BETTER BY USING ONLY ONE LOOP 

void sort2(vector<int>nums){
    int  low=0;
    int mid =0;
    int end =nums.size()-1;
    while(mid<=end){
        if(nums[mid] ==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;

        }
        else if(nums[mid] ==1){
            mid++;
        }
        else{
            swap(nums[mid] ,nums[end]);
            
            end--;
        }
        

    }
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<"  ";
    }
}
int main(){
    vector<int>arr {2,0,2,1,1,0};
    sort2(arr);

    return 0;
}
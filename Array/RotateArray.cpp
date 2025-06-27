#include<iostream>
#include<vector>

using namespace std;
//Left rotate
// 2,3,4,5,1
void LeftRotate(vector<int>& nums){
    int temp = nums[0];
    for(int  i=0;i<nums.size()-1;i++){
        nums[i]  =nums[i+1];
    }
    nums[nums.size()-1] = temp;
}


//ROTATE THE ARRAY BY THE K STEPS
void reverse(vector<int>& nums , int start , int end){
   while(start<=end){
    int temp = nums[start] ;
    nums[start]  =nums[end];
    nums[end] = temp;
    start++;
    end--;

   }
    

}
void RotateByKtimes(vector<int>& nums ,int k){
    int n = nums.size();
    k = k%n;
    if(k>n) return;
    reverse(nums ,0,n-k-1);
    reverse(nums , n-k ,n-1);
    reverse(nums,0,n-1);

    

}

//RIGHT ROTATE OF THE ARRAY

// 5,1,2,3,4       // 1,2,3,4,5
void RightRotate(vector<int>& nums){
    int temp = nums[nums.size()-1];
    
    for(int i =nums.size()-1;i>0;i--){
        nums[i]  =nums[i-1];
    }
    nums[0] = temp;
}







void print(vector<int>nums){
    for(int i =0;i<nums.size();i++){
        cout<<nums[i] <<"  ";
    }
}

int main(){
    vector<int>arr{1,2,3,4,5};
    // LeftRotate(arr);
    RotateByKtimes(arr , 2);
    cout<<"Left rotate of the array  :"<<endl;
    print(arr);

    cout<<endl;
    cout<<"Right Rotate of the array : "<<endl;
    RightRotate(arr);
    print(arr);

    return 0;
}
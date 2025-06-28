#include<iostream>
#include<vector>
using namespace std;

vector<int> traversal(vector<vector<int>>nums){
    int count =0;
    int rs =0;
    int cs = 0;
    int  re = nums.size()-1;
    int ce = nums[0].size()-1;
    int totalc =nums.size() * nums[0].size();
    vector<int>ans;
    while(count<totalc){
        for(int  i= cs;i<=ce;i++){
            ans.push_back(nums[rs][i]);
            
            count++;
        }
        rs++;
        for(int i =rs;i<=re;i++){
            ans.push_back(nums[i][ce]);
            
            count++;
        }
        ce--;
        for(int i =ce;i>=cs;i--){
            ans.push_back(nums[re][i]);
            
            count++;
        }
        re--;
        for(int i =re;i>=rs;i--){
            ans.push_back(nums[i][cs]);
            count++;
        }
        cs++;
    }
    return ans;
}

int main(){
    vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
    
    vector<int> ans = traversal(mat);

    for(int i = 0;i<ans.size();i++){
        
        cout<<ans[i]<<" ";
    }                         

    return 0;
}
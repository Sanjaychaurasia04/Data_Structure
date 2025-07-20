#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int solve(int n ,int x ,int y ,int z ,vector<int>& dp){
    if(n == 0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

    if(dp[n] != -1){
        return dp[n];
    }
    int cut_x  = solve(n - x ,x, y ,z ,dp) + 1 ;
    int cut_y  = solve(n - y ,x, y ,z ,dp) + 1 ;
    int cut_z  = solve(n - z ,x, y ,z ,dp) + 1 ;
    dp[n] = max(cut_x ,max(cut_y ,cut_z));  
    return dp[n];

}

int main(){
    int n = 4;
    int x = 2;
    int y = 1;
    int z = 1;
    vector<int>dp(n+1 , -1);
    int ans = solve(n ,x,y,z,dp);
    cout<<max(0 ,ans)<<endl;

    return 0;
}

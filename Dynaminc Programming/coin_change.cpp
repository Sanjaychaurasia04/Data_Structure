#include<iostream>
#include<vector>
#include<limits>
// #include<std/c++.h>
// Use the following for GCC/Clang, or include only what you need:
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

//recursive solution

int solve(vector<int>& coins , int amount ,int n){
    if(n == 0){
        if(amount % coins[0]==0){
            return amount/coins[0];
        }
        else{
            return 1e9;
        }
    }
    int skip = 0 + solve(coins ,amount , n-1);
    int take = 1e9;
    if(coins[n]<=amount){
        take = 1+ solve(coins , amount - coins[n],n);
    }
    return min(skip , take);

}
//top - down dp solution

int soltopdown(vector<int>& coins , int amount ,int n , vector<vector<int>>& dp){
    if(n ==0){
        if(amount % coins[0] == 0){
            return amount /coins[0];
        }
        else return 1e9;
    }

    if(dp[n][amount] != -1) {
        return dp[n][amount];
    }

    int skip = soltopdown(coins ,amount , n-1,dp);
    int take = 1e9;
    if(coins[n]<= amount){
        take =1+ soltopdown(coins ,amount-coins[n] ,n ,dp);
    }
    return dp[n][amount] = min(skip ,take);
}


//BOTTOM UP SOLUTION 

int solbottomup(vector<int>& coins , int amount){
    int n = coins.size();
    vector<vector<int>>dp(n ,vector<int>(amount +1 ,0));
    for(int i =0;i<= amount;i++){
        if( i %coins[0]==0){
            dp[0][i] = i /coins[0];
        }
        else{
            dp[0][i] = 1e9;
        }
    }
    for(int i = 1;i<n;i++){
        for(int j =0;j<=amount;j++){
            int skip = dp[i-1][j];
            int take  = 1e9;
            if(coins[i]<= j){
                take = 1+ dp[i][j-coins[i]];
            }
            dp[i][j] = min(skip , take);
        }
    }
    return dp[n-1][amount];
}
int main(){

    int n, amount;
    cout << "Enter the number of coins: ";
    cin >> n;
    
    vector<int> coins(n);
    cout << "Enter the coin values: ";
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    
    cout << "Enter the target amount: ";
    cin >> amount;
    
    vector<vector<int>>dp(n ,vector<int>(amount+1 ,-1));
    int result = solbottomup(coins, amount);
    if(result >= 1e9){
        cout<<"-1";
    }
    else{
        cout<<result;
    }

    return 0;
}
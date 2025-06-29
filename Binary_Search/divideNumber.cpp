#include<iostream>
using namespace std;

int divide(int dividend ,int divisor){
    int s =0;
    int e =dividend;
    int ans =-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(mid * divisor == dividend){
            ans = mid;
            return ans;
        }
        else if(mid*divisor <dividend){
            ans = mid;
            s = mid+1;
        }
        else{
            e= mid-1;
        }
    }
    return ans;
}

int main(){
    int dividend = 33;
    int divisor = 2;
    int ans  =divide(dividend , divisor);
    cout<<ans;

    return 0;
}
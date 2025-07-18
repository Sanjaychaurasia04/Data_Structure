#include<iostream>
#include<cstring>

using namespace std;

/*
Example 1:

Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

Example 2:

Input: num = "4206"
Output: ""
Explanation: There are no odd numbers in "4206".

Example 3:

Input: num = "35427"
Output: "35427"
Explanation: "35427" is already an odd number.
*/

string largestodd(string s){
    string ans = "   ";

    for(int i = s.length()-1;i>= 0 ;i--){
        if((s[i] - 0)%2 !=0){
            return s.substr(0 , i+1);
        }
    }
    return ans;

}


int main(){
    string str = "42061";
    string ans = largestodd(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

    return 0;
}
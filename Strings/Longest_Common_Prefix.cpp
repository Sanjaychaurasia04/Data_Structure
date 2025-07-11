#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

/*
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

string largest_prefix(vector<string>& s){
    string result  = "";

    for(int  i=0;i < s[0].length();i++){
        for(int j = 1;j<s.size();j++){
            if(i>= s[i].length() || s[j][i] != s[0][i]){
                return result;
            }

        }
        result  += s[0][i];
    }
    return result;

}

int main(){
    vector<string>str ;
    str = {"flower","flow","flight"};
    string ans = largest_prefix(str);

    for(int i =0;i<ans.size();i++){
        cout<<ans[i];
    }


    return 0;
}
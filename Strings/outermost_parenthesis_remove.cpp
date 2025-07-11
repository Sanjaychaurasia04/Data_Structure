#include<iostream>
#include<cstring>
#include<vector>

using namespace std;
/*
Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
*/
string remove_parenthesis(string & s){
    string ans = "";
    int depth  =0 ;

    for(int i =0;i<s.length();i++){
        if(s[i] == '('){
            if(depth > 0){
                ans += s[i];
            }
            depth++;
        }
        else{
            depth--;
            if(depth>0){
                
                ans+=s[i];

            }
        }
    }
    return ans;
}
int main(){

    string str = "(()())(())(()(()))";
    string ans = remove_parenthesis(str);
    for(int i =0;i<ans.length();i++){
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}
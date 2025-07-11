#include<iostream>
#include<cstring>

using namespace std;

/*
Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true

Example 2:

Input: s = "abcde", goal = "abced"
Output: false

*/
bool rotate_string(string s , string goal){
    if(s.empty()) return false;
    if(s.length() != goal.length()) return false;

    string ans = s+s;
    return ans.find(goal) != string::npos;

}

int main(){
    string str ="abcde";
    string goal = "cdeab";
    
    cout<<rotate_string(str , goal);

    return 0;

}
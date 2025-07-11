#include<iostream>
#include<cstring>
#include<vector>


using namespace std;
/*
Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

*/

bool valid_anagram(string s , string t){
    if(s.length() != t.length()) return false;
    vector<int>ans(26 , 0);

    for(int  i=0;i<s.length();i++){
        ans[s[i] - 'a']++;
        ans[t[i] - 'a']--;

    }

    for(int i = 0; i<ans.size();i++){
        if(ans[i] != 0) return false;
    }
    return true;
}



int main(){
    string str = "anagram";
    string str2 = "naga";
    bool ans = valid_anagram(str , str2);
    cout<<ans<<endl;

    return 0 ;

}

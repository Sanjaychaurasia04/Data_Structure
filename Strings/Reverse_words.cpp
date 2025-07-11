#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

/*
Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"


Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
*/

string reverse_string(string& s){
    string word;
    vector<string>words;

    stringstream ss(s);

    while(ss >> word){
        words.push_back(word);
    }
    reverse(words.begin() , words.end());

    string ans ="";

    for(int i = 0;i<words.size();i++){
        ans += words[i];
        if(i != words.size()-1){
            ans +=  " ";
        }
    }
    return ans;

}

int main(){
    string str = "the sky is blue";
    string ans = reverse_string(str);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
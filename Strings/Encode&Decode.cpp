#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>

using namespace std;

string encoder(string str,int shift){

    string ans ="";

    for(char ch : str){
        if(isalpha(ch)){
            char base = islower(ch) ? 'a':'A';

            ch = (ch -base + shift) % 26 + base;
        }
        ans += ch;
    }
    return ans;
}

string decoder(string str , int shift){
    return encoder(str ,26 -(shift %26));
}

int main(){
    string s;
    cout<<"Enter the string that you wnat to encode : ";
    getline(cin ,s);

    int shift;
    cout<<"Enter the shift value :";
    cin>>shift;

    cout<<"Encodeed string is : ";
    string encoded = encoder(s ,shift);
    cout<<encoded<<endl;

    string decoded = decoder(encoded ,shift);
    cout<<"decoder string is : "<<decoded;

    return 0;
}


#include <bits/stdc++.h>
#include <string>

using namespace std;

bool checkPallindrome(string s){
    if(s.size()==0||s.size()==1)
        return true;

    if(s[0]==s[s.size()-1]){
        s.pop_back();
        return checkPallindrome(s.substr(1));
    }
    else{
        return false;
    }
        
}

int main(){

    string s = "hixtih";
    cout << checkPallindrome(s) << endl;
    return 0;
}
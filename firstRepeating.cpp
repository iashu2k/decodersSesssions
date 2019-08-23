#include <bits/stdc++.h>
#include <unordered_map>
#include <string.h>

using namespace std;

void findrepeat(string t){
    unordered_map<char, int> m;

    for(int i=0; t[i]!='\0'; i++){
        if(m.count(t[i])!=0){
            cout << t[i] <<endl;
        }
        else{
            m[t[i]] = 1;
        }
    }

}




int main(){
    string s = "hith";
    findrepeat(s);
    return 0;
}
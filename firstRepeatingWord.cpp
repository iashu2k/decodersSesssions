#include <bits/stdc++.h>
#include <unordered_map>
#include <string.h>

using namespace std;

/*
input :     hello hi this that code eat sleep sing hi this
output :    hi
*/

void findrepeat(char* t){
    unordered_map<string, int> m;



    /*for(int i=0; t[i]!='\0'; i++){
        if(m.count(t[i])!=0){
            cout << t[i] <<endl;
        }
        else{
            m[t[i]] = 1;
        }
    }*/

    char *token = strtok(t, " ");

    while(strtok != NULL){
        if(m.count(token)!=0){
            cout<<token<<endl;
            break;
        }
        else{
            m[token] = 1;
        }
        token = strtok(NULL, " ");
    }

}




int main(){
    char s[100] = "hello hi this that code eat sleep sing hi this";
    //gets(s);
    findrepeat(s);
    return 0;
}
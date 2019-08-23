#include <bits/stdc++.h>
#include <stack>

using namespace std;

/*input : 11 0 5 8 4 3 2 1 10 14 6 9

output: 5 8 10 10 10 10 10 14 -1 9 -1*/

void nextGreater(int* arr, int n){
    int t;
    stack<int> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        
        if(s.top() < arr[i]){
        while (s.empty()==false && s.top() < arr[i])
        {   
            
            cout << arr[i] << " ";
            s.pop();
            
        }
                        
        }
        
        s.push(arr[i]);
        
        
    }

    while(s.empty()==false){
        cout << -1 << " ";
        s.pop();
    }
    

}

int main(){

    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }  

    nextGreater(arr, n);  
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
int ans = 0;
    stack<int> s1;
    stack<int> s2;
    s1.push(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i]>=s1.top()){
            s1.push(arr[i]);
        }else{
            while(s1.top()>arr[i]  && !s1.empty()){
                s2.push(s1.top());
                s1.pop();
                ans++;
            }
            s1.push(arr[i]);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    cout<<ans;
    
    return 0;
}
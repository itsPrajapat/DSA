// Given n integers, Every integer appears twice but two integers appears once, find those integers 

#include<bits/stdc++.h>
using namespace std;

pair<int, int> find(int arr[], int n){
    pair<int, int> pr;

    int XOR = 0;
    for(int i=0; i<n; i++){
        XOR = XOR^arr[i];
    }

    int index=0;
    while(XOR){
        if(XOR&1){
            break;
        }
        index++;
        XOR = XOR>>1;
    }

    int XOR1 = 0;
    int XOR2 = 0;

    for(int i=0; i<n; i++){
        if(arr[i] & (1<<index)){
            XOR1 = XOR1^arr[i];
        }else{
            XOR2 = XOR2^arr[i];
        }
    }

    pr.first = XOR1;
    pr.second = XOR2;

    return pr;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    pair<int, int> ans = find(arr, n);

    cout<<ans.first<<" "<<ans.second<<endl;

    
    return 0;
}
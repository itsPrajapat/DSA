#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int, int> mp;

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<mp.count(arr[0])<<endl;

    unordered_map<int, int>  :: iterator itr;

    for(itr=mp.begin(); itr!=mp.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }


    return 0;
}
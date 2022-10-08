// Numbers of Subarrays with sum 0

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> count;

    int prefix_sum = 0;

    for(int i=0; i<n; i++){
        prefix_sum += arr[i];
        count[prefix_sum]++;
    }

    int ans = 0;
    map<int, int> :: iterator iter;

    for(iter = count.begin(); iter!=count.end(); iter++)
    {
        int c = iter->second;

        ans += c*(c-1)/2;

        if(iter->first == 0){
            ans += iter->second;
        }
    }


    cout<<ans<<endl;
    
    return 0;
}
// Maximum frequency number 
// return the element having maximum frequency

#include<bits/stdc++.h>
using namespace std;

int maxFreq(int arr[], int n){

    unordered_map<int , int> m;

    int maxfreq = 0;
    int maxAns = 0;

    for(int i=0; i<n; i++){
        m[arr[i]]++;
        maxfreq = max(maxfreq, m[arr[i]]);
    }

    for(int i=0; i<n; i++){
        if(maxfreq = m[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }

    return maxAns;
}

int main(){

    int arr[5] = {4, 2, 3, 2, 2};

    cout<<maxFreq(arr, 5)<<endl;
    
    return 0;
}
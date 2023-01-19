#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
    unordered_map<int, int> mp;
    int count = 0;
    
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    unordered_map<int, int> :: iterator itr;
    
    // iterate through each element and increment the
    // count (Notice that every pair is counted twice)
    for(int i=0; i<n; i++){
        int key = k-arr[i];
        count += mp[key];

        // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (key == arr[i]){
            count--;
        }
    }

    return count/2;
}

int main(){

    int arr[] = {1, 2, 3, 4};

    cout<<getPairsCount(arr, 4, 6);

    
    return 0;
}
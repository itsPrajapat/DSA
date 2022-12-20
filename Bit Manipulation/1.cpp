// Find the element that appears once in an array where every other element appears twice.

#include<bits/stdc++.h>
using namespace std;

int findSingle(int arr[], int n){
    int ans = arr[0];
    for(int i=1; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    
    int arr[] = {2, 2, 6, 3, 4, 3, 4};

    cout<<findSingle(arr,7)<<endl;

    return 0;
}
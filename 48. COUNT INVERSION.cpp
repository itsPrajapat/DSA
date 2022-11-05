/* 
Problem Statement:
Count the inversions in the given array.
Two elements a[i] and a[j] form an inversion if a[i]>a[j] and i<j

Example:
        arr[] = {3,5,6,9,1,2,7,8}

Inversions = 10
Explanation: (3,1),(3,2),(5,1),(5,2),(6,1),(6,2),(9,1),(9,2),(9,7),(9,8)
 */



/*
#include<iostream>
using namespace std;

long long merge(int arr[], int l, int mid, int r){

    long long inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            inv += n1-i;
            // a[i], a[i+1], a[i+2]...a[] > b[j] and i<j
            j++; k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++; j++;
    }

    return inv;
}

long long mergeSort(int arr[], int l, int r){

    long long inv = 0;
    if(l<r){
        int mid = (l+r)/2;

        inv += mergeSort(arr,l,mid);
        inv += mergeSort(arr,mid+1,r);

        inv += merge(arr,l,mid,r);
    }
    return inv;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<mergeSort(arr,0,n-1);
    
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int countInversion(int arr[], int n)
{
    stack<int> s1;
    stack<int> s2;

    int count = 0;
    s1.push(arr[0]);

    for(int i=1; i<n; i++){
        if(arr[i]>=s1.top()){
            s1.push(arr[i]);
        }else{
            while(s1.top()>arr[i] && !s1.empty()){
                s2.push(s1.top());
                s1.pop();
                count++;
            }
            s1.push(arr[i]);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    return count;
}

int main(){
    
    int arr[] = {3,5,6,9,1,2,7,8};

    cout<<countInversion(arr, 8)<<endl;
    return 0;
}
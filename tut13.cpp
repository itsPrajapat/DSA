#include<bits/stdc++.h>
using namespace std;

void intersection(int arr[], int brr[], int a, int b, vector<int> &ans){
    sort(arr,arr+a);
    sort(brr,brr+b);
     
    int i=0;
    int j=0;

    while(i<a && j<b){
        if(arr[i]==brr[j]){
            ans.push_back(arr[i]); 
            i++; j++;
        }
        else if(arr[i]<brr[j]){
            i++;       
        }
        else{
            j++;    
        }
    }
}

int main(){

    int a,b;
    cin>>a>>b;

    int arr[a],brr[b];

    cout<<"Enter first array "<<endl;

    for(int i=0; i<a; i++){
        cin>>arr[i];
    }

    cout<<"Enter second array "<<endl;
    for(int i=0; i<b; i++){
        cin>>brr[i];
    }


    vector<int> ans;

    intersection(arr,brr,a,b, ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
    return 0;
}
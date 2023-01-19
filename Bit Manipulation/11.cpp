// // Generate all the subsets

// #include<bits/stdc++.h>
// using namespace std;

// void generateSubsets(int arr[], int n){
//     for(int num=0; num < (1<<n); num++){
//         vector<int> vec;
//         for(int bit=0; bit<n; bit++){
//             if(num & (1<<bit)){
//                 vec.push_back(arr[bit]);
//             }
//         }
//         // Printing
//         for(int i=0; i<vec.size(); i++){
//             cout<<vec[i]<<" ";
//         }cout<<endl;
//     }
// }

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     generateSubsets(arr, n);
    
//     return 0;
// }



//  Petr and a Combination Lock (codeforces)

#include<bits/stdc++.h>
using namespace std;

void generateSubsets(int arr[], int n){
    for(int num=0; num < (1<<n); num++){
    int clockwise = 0;
        for(int bit=0; bit<n; bit++){
            if((num & (1<<bit)) == 0){
                clockwise += arr[bit];
            }else{
                clockwise -= arr[bit];
            }
        }
        // Printing
        if(clockwise%360 == 0){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    generateSubsets(arr, n);
    
    return 0;
}
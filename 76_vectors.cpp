// Vector in C++
// Dynamic Array

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;          // 1 2 3

    // Another way to iterate through this vector by having an iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";    // iterator is a pointer that's why we are using * to print the value
    }cout<<endl;          // 1 2 3

    // Another way to iterate through this vector 
    for(auto element : v){
        cout<<element<<" ";
    }cout<<endl;         // 1 2 3

    v.pop_back();       // 1 2


    vector<int> v2 (3, 50);     // 50 50 50

    swap(v, v2);      // swap function

    for(auto element : v){
        cout<<element<<" ";
    }cout<<endl;

    for(auto element : v2){
        cout<<element<<" ";
    }cout<<endl;


    sort(v.begin(), v.end());

    return 0;
}
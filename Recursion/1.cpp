// Count ways to reach the N-th Stairs 

#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(int n){
    // base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    return countDistinctWayToClimbStair(n-1) + countDistinctWayToClimbStair(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<countDistinctWayToClimbStair(n);
    
    return 0;
}
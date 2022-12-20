// Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
// Note: If there is no set bit in the integer N, then return 0 from the function.   

#include<bits/stdc++.h>
using namespace std;

int getFirstSetBit(int n){
    int pos=1;
    while(n>0){
        // Checking if last bit is set
        if(n&1){
            return pos;
        }
        // Increment position and right shift number
        pos++;
        n = n>>1;
    }
    return 0;
}

int main(){

    cout<<getFirstSetBit(6636)<<endl;
    
    return 0;
}
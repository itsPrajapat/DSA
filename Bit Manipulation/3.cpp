// Swap the two numbers
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

int main(){
    
    int a = 4;
    int b=5;
    cout<<"Before Swapping - "<<"a:"<<a<<", b:"<<b<<endl;
    swap(a,b);
    cout<<"After Swapping - "<<"a:"<<a<<", b:"<<b<<endl;
    return 0;
}
// sayDigit: 432 --> four three two

#include<iostream>
using namespace std;

void print(int n, string arr[]){
    if(n==0){
        return;
    }
    int data = n%10;
    n = n/10;

    print(n, arr);

    cout<<arr[data]<<" ";
}

int main(){

    int n;
    cin>>n;
    
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    print(n, arr);

    return 0;
}
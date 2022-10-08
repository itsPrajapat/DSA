// print all substring of a string 

#include<iostream>
using namespace std;

void permutation(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];

    permutation(str.substr(1), ans);
    permutation(str.substr(1), ans+ch);
}

int main(){

    permutation("ABC", "");
    
    return 0;
}
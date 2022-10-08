// Check Palindrome

#include<iostream>
using namespace std;

bool isPalindrome(string str, int i, int j){
    if(i>=j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }else{
        return isPalindrome(str,i+1,j-1);
    }

}

int main(){

    string str;
    cin>>str;

    cout<<isPalindrome(str, 0, str.size()-1);
    
    return 0;
}
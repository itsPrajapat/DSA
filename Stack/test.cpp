#include<bits/stdc++.h>
using namespace std;

bool isMatch(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    return 0;
}

bool validParanthesis(string str){

    stack<char> st;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            st.push(str[i]);
        }else if(str[i]=='}' || str[i]==')' || str[i]==']'){
            if(st.empty()){
                return 0;
            }
            char x = st.top();
            st.pop();
            if(!isMatch(x, str[i])){
                return 0;
            }
        }
    }

    if(st.empty()){
        return 1;
    }
    return 0;

}

int main(){

    string str = "{}";

    cout<<validParanthesis(str)<<endl;
    
    return 0;
}
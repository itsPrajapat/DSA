
#include<iostream>
#include<stack>
using namespace std;

bool ismatch(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }

    return 0;
}

bool validParanthesis(string str){
    stack<int> st;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            st.push(str[i]);
        }else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(st.empty()){
                return 0;
            }
            char x = st.top();
            st.pop();
            if(!ismatch(x, str[i])){
                return 0;
            }
        }
    }
    if(st.empty()){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    string str = "({[6]})";

    cout<<validParanthesis(str)<<endl;
    
    return 0;
}
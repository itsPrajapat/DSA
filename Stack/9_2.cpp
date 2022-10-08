
#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    stack<string> stk;

    int len = s.length();

    for(int i=0; i<len; i++){
        string word = "";
        while(s[i]!=' ' && i<len){
            word+=s[i];
            i++;
        }
        stk.push(word);
    }

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }cout<<endl;
}

void deleteMiddleElement(stack<int> &st, int count, int size){
    // base case
    if(count==size/2){
        st.pop();
        return;
    }

    int ele = st.top();
    st.pop();

    deleteMiddleElement(st, count+1, size);

    st.push(ele);

}

bool isMatch(char a, char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
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
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            st.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
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
    else{
        return 0;
    }
}

void insertAtBottom(stack<int> &st , int val)
{
    if(st.empty()){
        st.push(val);
        return;
    }
    int ele = st.top();
    st.pop();
    insertAtBottom(st, val);
    st.push(ele);
}

void display(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

void reverse(stack<int> &st)
{
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}

int main(){

      string s = "Hello This is me and you";
    // reverse(s);

    stack<int> st;
    st.push(1);
    st.push(2);     
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    // insertAtBottom(st, 0);

    // display(st);

    reverse(st);
    display(st);
   

    // int size = st.size();

    // deleteMiddleElement(st, 0, size);

    

    string str = "({[6]})";
    // cout<<validParanthesis(str)<<endl;
    
    return 0;
}
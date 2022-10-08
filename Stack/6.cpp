// Insert at the bottom of the stack and reverse the stack

#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int val){
    if(st.empty()){
    st.push(val);
        return;
    }
    int ele = st.top();
    st.pop();
    insertAtBottom(st, val);
    st.push(ele);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // insertAtBottom(st, 0);
reverse(st);
     while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}
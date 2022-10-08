#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;

    public:
    // constructor
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }
};

void strReverse(string str)
{
    stack<string> st;

    for(int i=0; i<str.length(); i++){
        string word = "";
        while(str[i]!=' ' && i<str.length()){
            word += str[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
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

bool validParanthesis(string str)
{
    stack<int> st;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            st.push(str[i]);
        }else if(str[i]==')' || str[i]=='}' || str[i]==']'){
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
    }else{
        return 0;
    }
}

void insertAtBottom(stack<int> &st , int val){
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

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}

void deleteMiddle(stack<int> &st, int count, int size){
    if(count==size/2){
        st.pop();
        return;
    }

    int ele = st.top();
    st.pop();
    deleteMiddle(st, count+1, size);
    st.push(ele);
}

int main(){

    // Stack st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

    // while(!st.isEmpty()){
    //     cout<<st.Top()<<endl;
    //     st.pop();
    // }

    string str = "This is me";
    // strReverse(str);

    string parant = "({[56]})";

    // cout<<validParanthesis(parant)<<endl;

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // insertAtBottom(st, 0);

    // // display(st);

    // reverse(st);
    // display(st);

    int size = st.size();
    deleteMiddle(st, 0, size);
    display(st);


    return 0;
}
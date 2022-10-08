// Stack

#include<iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    // constructor 
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
        }
        top--;
    }

    int Top(){
       if(top==-1){
            cout<<"No element in Stack"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

    
};


int main(){

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();

    while(!st.empty()){
        cout<<st.Top()<<endl;
        st.pop();
    }
    
    return 0;
}
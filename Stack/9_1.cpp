#include<iostream>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;

    public:
    // Constructor
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

};

void display(Stack st){
    while(!st.empty()){
        cout<<st.Top()<<endl;
        st.pop();
    }   
}

int main(){

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // display
    display(st);


    
    return 0;
}
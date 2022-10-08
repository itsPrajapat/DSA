// Stack is a linear data structure 
// Stores a list of items in which an item can be added to or removed from the list only at one end 
// Stack follow LIFO mechanism ---> Last in First Out 

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
        top =-1;
    }

    // Push function
    void push(int x){

        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    // Pop function
    void pop(){

        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }

        top--;
    }

    // Top function
    int Top(){
        if(top==-1){
            cout<<"No element in Stack"<<endl;
            return -1;
        }

        return arr[top];
    }

    // Empty function
    bool empty(){
        return top==-1;
    }

};



int main(){

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    
    return 0;
}



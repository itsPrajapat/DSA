
#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int> &st, int count, int size){
    if(count == size/2){
        st.pop();
        return;
    }

    int ele = st.top();
    st.pop();

    // Recursive call
    deleteMiddle(st, count+1,  size);

    st.push(ele);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int count = 0;

    int size = st.size();
    deleteMiddle(st, count, size);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}
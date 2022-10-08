// We have to implement the stack with the help of queue

// We have two methods 
// First Method --> Making push method costly
// Second Method --> Making pop method costly


// Making Push method costly
/*
#include<iostream>
#include<queue>
using namespace std;

class stack{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    // constructor
    stack(){
        N = 0;
    }

    // push operation
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    // pop operation
    void pop(){
        q1.pop();
        N--;
    }

    // Top method
    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }

};

int main(){

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.size()<<endl;

    return 0;
} */




// Making Pop method costly
/*
#include<iostream>
#include<queue>
using namespace std;

class stack{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    // constructor
    stack(){
        N = 0;
    }

    // push operation
    void push(int val){
        q1.push(val);
        N++;
    }

    // pop operation
    void pop(){
        if(q1.empty()){
            return;
        }

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    // Top method
    int top(){
         if(q1.empty()){
            return -1;
        }

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }

    int size(){
        return N;
    }

};

int main(){
    
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    return 0;
}
*/
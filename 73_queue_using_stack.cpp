// Queue using Stacks

// Approach 1:
// Using 2 Stacks and deQueue operation costly

// Enqueue Operation
// Push x to stack1

// Dequeue Operaion
// If both stacks are empty then print error.
// If stack2 is empty while stack1 is not empty, push everything from stack1 to stack2
// Pop the element from stack2 and return it
/*
#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> s1;
    stack<int> s2;
public:
    
    // Enqueue or push operation
    void push(int x){               // Time Complexity ---> O(1)
        s1.push(x);
    }

    // Dequeue or pop operation
    int pop(){                  // Time Complexity ---> O(n)
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }

    // Empty function
    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    
    return 0;
}
*/





// Approach 2:
// Using Functions Call Stack
// Ek to in-built stack hoga or ek hum declare kr lenge

// Enqueue Operation
// Push x to stack1

// Dequeue Operaion
// If stack1 is empty then print error.
// If stack1 has only one element then return it.
// Recursively pop everything from the stack1, store the popped item in a variable res, push the res back to stack1 and return res

/*
#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> s1;
public:
    
    // Enqueue or push operation
    void push(int x){               
        s1.push(x);
    }

    // Dequeue or pop operation
    int pop(){                  
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }

    // Empty function
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    
    return 0;
}
*/
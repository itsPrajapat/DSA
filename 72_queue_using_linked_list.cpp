#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;

    public:
    // constructor
    queue(){
    front = NULL;
    back = NULL;
    }

    // Enqueue or push function
    void push(int x){
        node* n = new node(x);

        if(front==NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    // Dequeue or pop function
    void pop(){
        if(front==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        node* todelete = front;
        front = front->next;

        delete todelete;
    }

    // peek function
    int peek(){
        if(front==NULL){
            cout<<"No Element in Queue"<<endl;
            return -1;
        }

        return front->data;
    }

    //empty function
    bool empty(){
        if(front==NULL){
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

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;
    
    return 0;
}
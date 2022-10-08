// QUEUE  --> Linear data structure
// Stores a list of items in which an item can be inserted at one end and removed from the other end only
// FIFO --> First in First out


#include<iostream>
using namespace std;

#define n 20

class queue{
    int *arr;
    int front;
    int back;

    public:
    // constructor
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    // Enqueue function
    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else{
            back++;
            arr[back] = x;

            if(front==-1){
                front++;
            }
        }
    }

    // Dequeue function
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"No Elements in Queue"<<endl;
            return;
        }

        front++;
    }

    // peek function
    int peek(){
        if(front==-1 || front>back){
            cout<<"No Elements in Queue"<<endl;
            return -1;
        }

        return arr[front];
    }

    // Empty Function
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.empty()<<endl;
    
    return 0;
}
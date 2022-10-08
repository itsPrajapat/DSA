
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};

 void insertAtTail(Node* &head, int data)
    {
        Node* tailNode = new Node(data);
        Node* temp = head;

        if(head==NULL){
            head = tailNode;
            return;
        }

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = tailNode;
    }

    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }

    Node* reverseIt(Node* &head)
    {
        // base case
        if(head== NULL || head->next == NULL)
        {
            return head;
        }

        Node* newNode = reverseIt(head->next);
        head->next->next = head;
        head->next = NULL;

        return newNode;
    }

    Node* reverseOrder(Node* &head)
    {
        // find the middle element of linked list
        Node* slow = head;
        Node* fast = head->next;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* middle = slow;
        Node* reverse = slow->next;
        slow->next = NULL;

        // reverse the second half
        Node* newHead =  reverseIt(reverse);

        // Merge the both half alternatively
        Node* first = head;
        Node* second = newHead;

        while(second!=NULL)
        {
            Node* temp1 = first->next;
            Node* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }

        return head;
    }

 
int main(){

    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);

    display(head);

    Node* newNode = reverseOrder(head);
    display(newNode);

    return 0;
}
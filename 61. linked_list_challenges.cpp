// Find middle of linked list

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

void insertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// middle element of linked list
int middleElement(node* &head){

    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

// delete the middle element of linked list
void deleteMiddleElement(node* &head){

    node* slow = head;
    node* fast = head;
    node* prev;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;
}

// Delete the complete linked list
void deleteLinkedList(node* &head){
    node* prev = head;
    head = head->next;

    if(head==NULL){
        delete prev;
        return;
    }

    while(head != NULL){
        delete prev;
        prev = head;
        head = head->next;
    }
    delete prev;
}

// printing the linked list in reverse order
void print_reverse(node* &head){

    // base case
    if(head==NULL){
        return;
    }

    print_reverse(head->next);
    cout<<head->data<<" ";
}

// Check whether a linked list is palindrome or not using Recursion
bool isPalindrome(node* &left, node* right){
    
    // base case
    if(right==NULL){
        return true;
    }

    bool first = isPalindrome(left, right->next);
    
    if(first==false){
        return false;
    }

    bool second = (right->data == left->data);
    left = left->next;
    return second;
}


// Delete duplicates from linked list (Sorted)
void remove_duplicate_sorted(node* &head){

    node* curr = head;

    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
}


int main(){

    node* head = NULL;

    int arr[] = {1,3,2,4,5,6,7};

    for(int i=0; i<7; i++){
        insertAtTail(head, arr[i]);
    }
    display(head);

    // cout<<"Middle element of linked list is: "<<middleElement(head)<<endl;

    // deleteMiddleElement(head);
    // display(head);

    // deleteLinkedList(head);
    // display(head);

    // print_reverse(head);

    cout<<endl;
    // cout<<isPalindrome(head, head)<<endl;

    // remove_duplicate_sorted(head);
    // display(head);


    return 0;
}
// Linked list

#include<bits/stdc++.h>
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

void insertAtHead(node* &head, int data){
    node* n = new node(data);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int data){
    node* n = new node(data);
    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}




void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


node* merge(node* &list1, node* &list2){

      vector<int> vec;
        while(list1!=NULL){
            vec.push_back(list1->data);
            list1=list1->next;
        }
         while(list2!=NULL){
            vec.push_back(list2->data);
            list2=list2->next;
        }


        sort(vec.begin(), vec.end());

        node* node = NULL;

        int n = vec.size();

        for(int i=0; i<vec.size(); i++){
            insertAtTail(node, vec[i]);
            // node = node->next;
        }

        return node;
}

int length(node* &head){
    node* temp= head;

    int count = 0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    return count;
}

node* removeNthFromEnd(node* &head, int k){
     int n = length(head);
     int r = n-k-1;

    node* temp = head;
    while(r--){
        temp = temp->next;
    }
    temp->next = temp->next->next;

    return head;
}


int main(){

    node* head1 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 4);
    display(head1);
    node* head2 = NULL;

    insertAtTail(head2, 1);
    insertAtTail(head2, 3);
    insertAtTail(head2, 4);
    display(head2);
    

    node* newHead = merge(head1, head2);
    display(newHead);

    node* head = NULL;
    display(head);

    node* newHead2 = removeNthFromEnd(head, 1);
    display(newHead2);
    
    
    return 0;
}
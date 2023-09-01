#include<bits/stdc++.h>
using namespace std;
    
class Node{
public:
    int val;
    Node* next;         // store the address

    // constructor
    Node(int data){
        this -> val = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int val){

    // creat new node
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
} 
void insertAtTail(Node* &head,int val) {
    
    Node* new_node = new Node(val);

    Node* temp = head;                         // creating new node but adress is same
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    // temp hase reached last node
    temp -> next = new_node; 
}

void insertAtPosition(Node* &head,int val, int pos){

    if(pos == 0){
        insertAtHead(head,val);
        return;
    }

    Node* new_node = new Node(val);

    Node* temp= head;
    int current_pos = 0;
    while(current_pos != pos-1){
        temp = temp -> next;
        current_pos++;
    }

    // temp is pointing to node position-1  
    new_node -> next = temp -> next;
    temp -> next = new_node;

}
void updateAtPosition(Node* &head,int val, int k){

    Node* temp= head;
    int current_pos = 0;

    while(current_pos != k){
        temp = temp -> next;
        current_pos++;
    }

    // temp is pointing to kth position
    temp -> val = val;

}

void deleteAtHead(Node* &head){

    Node* temp = head; // node to be deleted
    head = head -> next;
    free(temp);
}
void deleteAtTail(Node* &head){
    Node* secoundLast = head;

    while(secoundLast -> next -> next != NULL){
        secoundLast = secoundLast -> next;
    }

    // now secound last point to secound last node
    Node* temp = secoundLast -> next; // node to be deleted
    secoundLast ->  next = NULL;
    free(temp);
}
void deletAtPosition(Node* head, int pos){
    if(pos == 0){
        deleteAtHead(head);
        return;
    }

    int currPosition = 0;
    Node* prev = head;
    while(currPosition != pos-1){
         prev = prev -> next;
        currPosition++;
    }

    // prev is pointing to node at pos-1
    Node* temp = prev -> next; // node to be deleted
    prev -> next = prev -> next -> next ;
    free(temp);   
}
void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> val << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

signed main()
{
    // Node* node1 = new Node(10);
    // cout << node1 -> val << " "<< node1 -> next << endl;

    Node* head = new Node(3);
    display(head);

    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);

    insertAtTail(head,4);
    display(head);

    insertAtPosition(head,-10,2);
    display(head);
    updateAtPosition(head,-30,2);
    display(head);

    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deletAtPosition(head,1);
    display(head);
    
    return 0;
}

/*
    ek temp pointer thi aakhi linklist ma travel kri skay

    -> It's a shorthand notation to dereference the pointer and then access the member.
*/
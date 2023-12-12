#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        this -> val = data;
        this -> next = NULL;
    }
};
 
class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = nullptr;
    }    

    void insertAtTail(int val){

        Node *newNode = new Node(val);

        if(head == nullptr){ 
            head = newNode;
            return;
        }

        Node *tmp = head; 
        while (tmp->next != nullptr){    
            tmp = tmp->next;
        }

        tmp->next = newNode;       

    }
 
    void display(){    
        Node* temp = head;

        while(temp != NULL){
            cout << temp -> val << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

// this is itereative way 
Node* reverseLinkedList(Node* &head){

    Node *previous = nullptr;
    Node *curr = head;

    // move all three pointers by the one step

    while(curr != nullptr){
        Node *nextptr = curr->next;
        curr->next = previous;

        // move by the one
        previous = curr;
        curr = nextptr;

    }

    // when this loop will end, previous point to the last node which is new head
    return previous;
}

// we also do the reacusive way
Node* reverseLLRecursion(Node* &head){

    // base case
    if(head == nullptr || head->next == nullptr)
        return head;

    // recursive case
    Node *newHead = reverseLLRecursion( head->next );
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    // ll.insertAtTail(4);

    // ll.head = reverseLinkedList(ll.head);
    ll.head = reverseLLRecursion(ll.head);
    ll.display();

}
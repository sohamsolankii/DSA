#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;      

};

void printList(Node* n){
    while(n != NULL){
        cout << n->val << " ";
        n = n->next;
    }    
}

void deleteHead(Node* &head){
    // we also need to condition for the check linked list is not empty / not only one element in the linked list 
    if (head == nullptr) {
        // Handle the case where the list is empty.
        return;
    }
    if (head->next == nullptr) {
        // Handle the case where there's only one node in the linked list.
        delete head;
        head = nullptr;
        return;
    } 

    Node *tmp = head;
    head = head->next;             // tmp na next mate pn work krse
    delete tmp;
}

void deleteTail(Node* &head){
    if (head == nullptr) {
        // Handle the case where the list is empty.
        return;
    }

    if(head->next == NULL){
        // Handle casse only one node in the linked list
        delete head;
        head = nullptr;
        return;
    }

    // delete last node we first go the second last element(then after comning element we want to delete)
    Node *current = head;
    while(current->next->next != NULL){
        current = current->next;
    }

    Node *tmp = current->next;
    current->next = NULL;
    delete tmp;
}

// without edge case
void deleteAtPosition(Node* &head,int k){
    if(deleteHead == 0){
        deleteHead(head);
        return;
    }

    Node *tmp = head;

    int current = 0;
    while(current != k-1){
        tmp = tmp->next;
        current++;
    }

    Node *delet = tmp->next;
    tmp->next = tmp->next->next;
    delete delet;
}

//with edge caase
void deleteAtPositionWithCase(Node* &head, int k){
    if (k <= 0) {
        // Invalid position, cannot delete a node at a non-positive position.
        return;
    }

    if (k == 1) {
        // Delete the head node.
        deleteHead(head);
        return;
    }

    Node *tmp = head;
    int current = 0;

    // Traverse the list to find the node at position (k-1)
    while (current != k - 2 && tmp != nullptr) {
        tmp = tmp->next;
        current++;
    }

    if (tmp == nullptr || tmp->next == nullptr) {
        // If tmp is null, we reached the end of the list before reaching position (k-1),
        // or tmp->next is null, which means there are fewer than (k-1) nodes in the list.
        // In either case, we cannot delete a node at the given position.
        return;
    }

    Node *toDelete = tmp->next;
    tmp->next = tmp->next->next;
    delete toDelete;
}

int main(){
    Node *head = new Node();     
    Node *second = new Node();
    Node *third = new Node();

    head->val = 1;      
    head->next = second;

    second->val = 2;       
    second->next = third;

    third->val = 3;
    third->next = NULL;

    // deleteHead(head);
    // deleteTail(head);
    // deleteAtPosition(head,1);             //  0 base indexing thi kyru che
    // deleteAtPositionWithCase(head,2);       // 1 base indexing thi kyru che

    printList(head);  
}

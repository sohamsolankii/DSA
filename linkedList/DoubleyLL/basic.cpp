#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* previous;

};

void printForward(Node* head){
    Node* traverser = head;

    while(traverser != nullptr){
        cout << traverser->val << " ";
        traverser = traverser->next;
    }
}
// two diffrent then forward
void printBackward(Node* tail){  // first is recive tail
    Node* traverser = tail;

    while(traverser != nullptr){
        cout << traverser->val << " ";
        traverser = traverser->previous; // change here next to the tail
    }
}
int main(){

    Node* head;
    Node* tail;

    // add first node
    Node* node = new Node();  // ek node mate head and tail same hase
    node->val = 4;
    node->next = nullptr;
    node->previous = nullptr;    

    head = node;            // for the first node head and tail are same
    tail = node;

    // add second node
    node = new Node();
    node->val = 5;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

    // add third node
    node = new Node();
    node->val = 6;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

    // printForward(head);
    printBackward(tail);
}
/*
    steps for the adding second element in the linked list: 
        creat new node
        give node value
        next pointer give null 
        previous pointer give tail

        first na next mathi null kadhi ne secound nu location aapva nu 
        change tail value to the secoud(other) node (so head and tail are the change)
*/

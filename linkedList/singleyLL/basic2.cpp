#include<bits/stdc++.h> // creat three node and understand every thing
using namespace std;

class Node{
public:
    int val;
    Node* next;         // store the address

};

void printList(Node* n){
    while(n != NULL){
        cout << n->val << " ";
        n = n->next;
    }    
}

void insertAtFront(Node** head,int newVal){        // we are passing adress 

    // steps :-
    // prepare a new node
    Node* newNode = new Node();
    newNode->val = newVal;
    
    // put it in the front of current head
    newNode->next = *head;

    // move the head of the list to the next point
    *head = newNode;
}   

void insertAtEnd(Node* &head, int newVal) {

    // Creating a new node and giving it the value we want to insert
    Node *newNode = new Node();
    newNode->val = newVal;
    newNode->next = NULL;

    // If the linked list is empty, make the new node the head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // creating a new pointer to traveling in the same linked list
    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Attach the new node to the last node
    current->next = newNode;
}

void insertAfter(Node* &head,int newVal,int k){
    
    Node *newNode = new Node();
    newNode->val = newVal;
    newNode->next = NULL;

    Node *tmp = head;
    int m = 0;
    while(m+1 < k){
        tmp = tmp->next;
        m++; 
    } 

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insertSome(Node* previos,int newValue){
    // check that previous node is null
    if(previos == NULL){
        cout << "previos node is null" << endl;
        return;
    }

    // prepare a new node
    Node* newNode = new Node();
    newNode->val = newValue;

    // insert newnode after precious
    newNode->next = previos->next;
    previos->next = newNode;
}

int main(){
    
    Node *head = new Node();      // not assign the value just allocate the space
    Node *second = new Node();
    Node *third = new Node();

    head->val = 1;       // (->) this symbole use when trying to access members of class in case we are using pointers (so in pointer case we are avoinding . oprator)
    head->next = second;

    second->val = 2;       
    second->next = third;

    third->val = 3;
    third->next = NULL;

    // insertAtFront(&head,-1);         // &head ( je add karvu che tenu nu address ) passing->(adress,value) 
    // insertAtFront(&head,-2);

    // insertAtEnd(head,4);

    // insertAfter(head,-1,1);

    insertSome(head,-1);
    insertSome(second,-2);

    printList(head);               // we are passing first node

}


/*
    steps for insert at the end of the linked list
        : prepare a newnode
        : if the lined list will be the empty, newnode will be a become head 
        : find a last node
        : insert a new node after the last node(at the end)
*/
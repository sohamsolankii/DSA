#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        this -> val = data;
        this -> next = NULL;
        this->prev = NULL;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> val << " ";
        temp  = temp -> next;
    }
    cout << endl;
}
void printBackward(Node* tail){  // first is recive tail
    Node* traverser = tail;

    while(traverser != nullptr){
        cout << traverser->val << " ";
        traverser = traverser->prev; // change here next to the tail
    }
}


//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}

void insertAtTail(Node* &tail,Node* &head,int val){
    Node* tmp = new Node(val);             // creating new node

    // empty linked list
    if(tail == nullptr){
        tail = tmp;
        head = tmp;
    }
    else{
        // method 1 : travel from head and go last and appent it 
        // Node* point = head;
        // while(point->next != nullptr){
        //     point = point->next;
        // }

        // point->next = tmp;
        // tmp->prev = point;
        // tail = tmp;

        // meathod 2 : direct change in tail in ll
        tail->next = tmp;
        tmp->prev = tail;
        tail = tmp;
    }
}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}


signed main()
{

    Node* head = NULL;
    Node* tail = NULL;

    Node* node1 = new Node(8);
    head = node1;
    tail = node1;

    insertAtHead(tail,head,5);
    // insertAtHead(tail,head,1);
    insertAtTail(tail,head,9);
    insertAtPosition(tail,head,2,6);

    print(head); 
    printBackward(tail);
    
    return 0;
}
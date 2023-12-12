#include<bits/stdc++.h> // we are delete alternate node from second
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

    // we initialize the linked list so in starting it point to the null
    LinkedList(){
        head = nullptr;
    }    

    void insertAtTail(int val){

        Node *newNode = new Node(val);

        if(head == nullptr){ // if initialy linked list is empty
            head = newNode;
            return;
        }

        Node *tmp = head; // pointer to travel to the linked list
        while (tmp->next != nullptr){         // jya sidhu last na pochiye tya sudhi
            tmp = tmp->next;
        }

        tmp->next = newNode;       

    }
 
    void display(){    // we not need to give paramenter head bcz we are in linked list call in the same linked list node
        Node* temp = head;

        while(temp != NULL){
            cout << temp -> val << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

void deleteAlternateNodes(Node* &head){

    Node *curr = head;
    while(curr != nullptr and curr->next != nullptr){   // jya sudhi true tya sudhi 4 valstu krva ni che
        Node *tmp = curr->next;      // this is the node to be the deleted
        curr->next = curr->next->next;
        delete tmp;

        curr = curr->next;  //  linked list ne aagd vadhar va mate
    }
}

signed main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);

    deleteAlternateNodes(ll.head);

    ll.display();

    return 0;
}
/*
    stopping conditions :
        curr -> next = null (odd)
        curr == null
*/
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

    printList(head);               // we are passing first node

}


/*
    (Node *&head):
        -> This is a reference to a pointer. It allows you to modify the actual pointer that is passed to the function.
        -> When you modify head inside the function, it will affect the original pointer outside the function.
        -> It is commonly used when you want to change the value of the pointer itself, like reallocating memory or changing the head of a linked list.

        void modifyPointer(Node *&head) {
            head = new Node();  // Changes the actual pointer outside the function.
        }

        int main() {
            Node *myHead = nullptr;
            modifyPointer(myHead);  // Now, myHead points to a new Node.
        }
    

    (Node **head):
        -> This is a pointer to a pointer. It allows you to indirectly modify the pointer it points to.
        -> When you modify *head inside the function, you are changing the value of the pointer that head points to. It does not affect the original pointer outside the function unless you dereference it.

        void modifyPointer(Node **head) {
            *head = new Node();  // Changes the value of the pointer outside the function.
        }

        int main() {
            Node *myHead = nullptr;
            modifyPointer(&myHead);  // Now, myHead points to a new Node.
        }

    -> In summary, (Node *&head) is a reference to a pointer, allowing direct modification of the original pointer, while (Node **head) is a pointer to a pointer, allowing indirect modification of the original pointer by dereferencing it.
    The choice between them depends on whether you want to change the pointer itself or the value it points to.












*/
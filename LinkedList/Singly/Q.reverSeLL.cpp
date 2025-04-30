#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void displayLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }        
}

Node* reverseLL(Node* &prev, Node* &curr){
    if(curr == nullptr){
        return prev;
    }
    Node* forward = curr->next;
    curr->next = prev;

    return reverseLL(curr,forward);
}

Node* revUsingLoop(Node* &head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* reverseUsingRecursion(Node* prev, Node* curr){
        if(curr==NULL){
            return prev;
        }

        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;

        return reverseUsingRecursion(prev,curr);
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node* head = first;
    displayLL(head);
    cout << endl;
    
    // cout << "Reversing LL using recursion : "<< endl;
    Node* prev = NULL;
    Node* curr = head;
    // head = reverseLL(prev,curr);

    // displayLL(head);
    // cout << endl;
    
    // cout << "Reversing using loop: "<< endl;
    // head = revUsingLoop(head);
    // displayLL(head);
    // cout << endl;   

    cout << "Reverse using below recursive recursion: " << endl;
    head = reverseUsingRecursion(prev,curr);
    displayLL(head);
    cout << endl;   
    return 0;
}
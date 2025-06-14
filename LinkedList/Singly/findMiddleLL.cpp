#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* getMiddleNode(Node* &head){
    if(head==nullptr){
        cout << "Linked List is empty.";
        return head;
    }
    if(head->next == nullptr){
        return head;
    }
    // when ll is not empty
    Node* slow = head; 
    Node* fast = head; 

    while(slow!=nullptr && fast!=nullptr){
        fast = fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

//  For even node
Node* getMiddleNodeOddNode(Node* &head){
    if(head==nullptr){
        cout << "Linked List is empty.";
        return head;
    }
    if(head->next == nullptr){
        return head;
    }
    // when ll is not empty
    Node* slow = head; 
    // Node* fast = head; 

    // This to find the middle node in even node
    Node* fast = head->next; 

    while(slow!=nullptr && fast!=nullptr){
        fast = fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    Node* head = first;
    Node* tail = sixth; 

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    cout << endl;
    cout << "Printing the LL: ";
    print(head);
    cout << endl;

    cout << "Printing the middle value from odd node: "<< endl;
    cout << getMiddleNodeOddNode(head)->data << endl;

    return 0;
}
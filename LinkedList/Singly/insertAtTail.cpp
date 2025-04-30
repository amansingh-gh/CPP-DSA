#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout << "Node with value: " << this->data << " deleted" << endl ;
    }
};


void insertAtHead(Node *&head, Node *&tail, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}


void insertAtTail(Node *&head, Node *&tail, int data){
    Node* newNode = new Node(data);
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int findLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position==0){
        insertAtHead(head,tail,data);
    }


    int len = findLength(head);

    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }

    int i=0;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    Node* newNode = new Node(data);
    newNode-> next = curr;
    prev->next = newNode;


}

void deleteNode(int pos, Node* &head, Node* &tail){
    if(head==NULL){
        cout << "Cannot delete node, LL is Empty";
    }

    // Deleting first node
    if(pos==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    // Deleteing last node
    int len = findLength(head);
    if(pos==len){
        // 1. find prev
        int i=0; 
        Node* prev = head;
        while(i<pos-1){
            prev = prev -> next;
            i++;
        }

        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }


    int i=1;
    Node* prev = head;
    while(i<pos-1){
        prev = prev->next;
        i++;
    } 

    Node* curr = prev->next;

    curr->next = NULL;
    delete curr;
    

}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 100);
    insertAtHead(head, tail, 200);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 80);
    print(head);
    cout << endl;
    // insertAtPosition(101,3,head,tail);
    // print(head);
    // cout << endl;

    deleteNode(5,head,tail);
    cout << endl;
    print(head);

    return 0;
}
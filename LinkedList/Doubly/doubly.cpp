#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        cout << "Node with value : "<<this->data << "deleted" << endl; 
    }
};

int length(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

    void insertAtHead(Node* &head, Node* &tail,int data){
        if(head==NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }


    void insertAtTail(Node* &head, Node* &tail, int data){
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode-> prev = tail;
        tail = newNode;
    }

    void insertAtMiddle(Node* &head, Node* &tail, int position, int data){
        if(head==NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        if(position==1){
            insertAtHead(head,tail,data);
            return;
        }
        
        int len = length(head);

        if(position>len){
            insertAtTail(head,tail,data);
            return;
        }

        // insert at middle
        int i=1;
        Node* prevNode = head;
        while(i<position-1){
            prevNode = prevNode->next;
            i++;
        }
        Node* curr = prevNode->next;

        Node* newNode = new Node(data);

        prevNode->next = newNode;
        newNode->prev = prevNode;
        curr->prev = newNode;
        newNode->next = curr;
        

    }

    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void deletePos(Node* &head, Node* &tail, int position){
        if(head == NULL){
            cout << "LL is empty";
            return;
        }


        if(position==1){
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
            return;
        }
        int len = length(head);
        if(position==len){
            Node* temp = tail;
            tail = tail->prev;
            tail->prev = NULL;
            tail->next = NULL;
            delete temp;
            return;
        }

        int i=1;
        Node* left = head;
        while(i<position-1){
            left = left->next;
            i++;
        }
        Node* curr = left->next;
        Node* right = curr->next;

        left->next = right;
        right->prev = left;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
        return;

    }

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    Node *head = first;
    Node *tail = fifth;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    cout << "Prinitng double LL: " << endl;
    print(head);
    cout << endl;
    cout << endl;
    
    cout << "After inserting value at head: "<< endl;
    insertAtHead(head,tail,101);
    
    print(head);
    cout << endl;
    cout << endl;
    
    cout << "Insert at tail: " << endl;
    insertAtTail(head,tail,501);
    print(head);
    cout << endl;
    cout << endl;
    
    cout << "Insert at middle: "<< endl;
    insertAtMiddle(head,tail,4,900);
    print(head);
    cout << endl;
    cout << endl;
    
    cout << "Before deleting element: "<< endl;
    print(head);
    cout << endl;
    cout << endl;
    cout << "Deleting element from given location: "<< endl;
    deletePos(head,tail,5);
    print(head);
    cout << endl;
    cout << endl;
    
    return 0;
}
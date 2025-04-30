#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTreeLevelOrder() {
    cout << "Enter root data: ";
    int data;
    cin >> data;

    if (data == -1) return NULL;

    node* root = new node(data);
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        // Left child
        cout << "Enter left child of " << temp->data << ": ";
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        // Right child
        cout << "Enter right child of " << temp->data << ": ";
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    node* root = NULL;

    // Build tree without recursion
    root = buildTreeLevelOrder();

    cout << "\nPrinting the level order traversal output:\n";
    levelOrderTraversal(root);

    cout << "\nPrinting inorder : "<< endl;
    inorder(root);

    cout << "\nPrinting preorder : "<< endl;
    preorder(root);

    cout << "\nPrinting postorder : "<< endl;
    postorder(root);
    return 0;
}

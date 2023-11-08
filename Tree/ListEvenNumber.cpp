#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *createNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->left = p->right = NULL;
    return p;
}

struct BST
{
    Node *root;
};

void init(BST &t) {
    t.root = NULL;
}

void addToNode(Node *&root, int x) {
    if (x < root->data) {
        if (root->left == NULL) {
            Node *p = createNode(x);
            root->left = p;
        }
        else addToNode(root->left, x);
    }
    else if (x > root->data) {
        if (root->right == NULL) {
            Node *p = createNode(x);
            root->right = p;
        }
        else addToNode(root->right, x);
    }
}

void addToBST(BST &t, int x) {
    if (t.root == NULL) {
        Node *p = createNode(x);
        t.root = p;
    }
    else addToNode(t.root, x);
}

void printNode(Node *root) {
    if (root->left != NULL)
        printNode(root->left);
    if (root->right != NULL)
        printNode(root->right);
    if (root->data % 2 == 0)
        cout << root->data << " ";
}

void printBST(BST t) {
    printNode(t.root);
}

int main() {
    int n;
    cin >> n;
    BST t;
    init(t);
    int x;

    while (n--) {
        cin >> x;
        addToBST(t, x);
    }
    
    printBST(t);
    return 0;
}
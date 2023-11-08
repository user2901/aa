#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}

struct List
{
    Node *head, *tail;

    void init() {
        head = tail = NULL;
    }

    void insertTail(int x) {
        Node *p = createNode(x);
        if (head == NULL) head = tail = p;
        else {
            tail->next = p;
            tail = p;
        }
    }

    void printList() {
        Node *cur = head;
        while (cur != NULL) {
            cout << cur->data << " ";
            cur = cur->next;
        }
    }

    void removeAll() {
        while (head != NULL) {
            Node *cur = head;
            head = cur->next;
            delete cur;
        }
        tail = NULL;
    }

    List createList() {
        List lst2;
        lst2.init();
        Node *pre = createNode(0);
        Node *cur = head;

        while (cur != NULL) {
            int x = cur->data + pre->data;
            lst2.insertTail(x);
            pre = cur;
            cur = cur->next;
        }
        return lst2;
    }
};

int main() {
    int n;
    cin >> n;
    List lst;
    lst.init();
    int x;

    while (n--) {
        cin >> x;
        lst.insertTail(x);
    }
    
    List lst2 = lst.createList();
    lst2.printList();
    lst2.removeAll();
    lst.removeAll();
    return 0;
}
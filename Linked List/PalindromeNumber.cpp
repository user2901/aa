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
};

void init(List &lst) {
    lst.head = lst.tail = NULL;
}

void insertTail(List &lst, int x) {
    Node *p = createNode(x);
    if (lst.head == NULL) lst.head = lst.tail = p;
    else {
        lst.tail->next = p;
        lst.tail = p;
    }
}

bool isRevert(int n) {
    int tmp = n;
    int rev = 0;
    while (tmp > 0) {
        rev = rev*10 + tmp%10;
        tmp /= 10;
    }
    return n == rev;
}

void printRevert(List lst) {
    Node *cur = lst.head;
    int i = 0;
    while (cur != NULL) {
        if (isRevert(cur->data)) cout << i << " ";
        cur = cur->next;
        i++;
    }
}

void removeAll(List &lst) {
    while (lst.head != NULL) {
        Node *cur = lst.head;
        lst.head = cur->next;
        delete cur;
    }
    lst.tail = NULL;
}

int main() {
    List lst;
    init(lst);
    int x;

    while (true) {
        cin >> x;
        if (x == -1) break;
        insertTail(lst, x);
    }

    printRevert(lst);
    removeAll(lst);
    return 0;
}
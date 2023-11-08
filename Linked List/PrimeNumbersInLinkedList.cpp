#include <iostream>
#include <cmath>
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

bool isPrime(int n) {
    if (n < 2) return false;
    else if (n > 2) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n%i == 0) return false;
        }
    }
    return true;
}

int cntPrimes(List lst) {
    Node *cur = lst.head;
    int cnt = 0;

    while (cur != NULL) {
        if (isPrime(cur->data)) cnt++;
        cur = cur->next;
    }
    return cnt;
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
    
    cout << cntPrimes(lst);
    removeAll(lst);
    return 0;
}
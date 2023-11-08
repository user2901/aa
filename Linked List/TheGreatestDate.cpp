#include <iostream>
using namespace std;

struct Node
{
    int d, m, y;
    Node *next;
};

Node *createNode(int d, int m, int y) {
    Node *p = new Node;
    p->d = d;
    p->m = m;
    p->y = y;
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

void insertTail(List &lst, int d, int m, int y) {
    Node *p = createNode(d, m, y);
    if (lst.head == NULL) lst.head = lst.tail = p;
    else {
        lst.tail->next = p;
        lst.tail = p;
    }
}

Node *max(List lst) {
    Node *ans = lst.head;
    Node *cur = lst.head;

    while (cur != NULL) {
        if (cur->y > ans->y || (cur->y == ans->y && cur->m > ans->m) || (cur->y == ans->y && cur->m == ans->m && cur->d > ans->d)) {
            ans = cur;
        }
        cur = cur->next;
    }
    return ans;
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
    int n;
    cin >> n;
    int d, m, y;

    while (n--) {
        cin >> d >> m >> y;
        insertTail(lst, d, m, y);
    }
    
    Node *ans = max(lst);
    cout << ans->d << " " << ans->m << " " << ans->y;
    removeAll(lst);
    return 0;
}
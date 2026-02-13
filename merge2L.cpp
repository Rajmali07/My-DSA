#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Merge two sorted linked lists
    Node* mergeList(Node* h1, Node* h2) {
        if (h1 == NULL) return h2;
        if (h2 == NULL) return h1;

        if (h1->data <= h2->data) {
            h1->next = mergeList(h1->next, h2);
            return h1;
        } else {
            h2->next = mergeList(h1, h2->next);
            return h2;
        }
    }

    Node* getHead() {
        return head;
    }

    void setHead(Node* h) {
        head = h;
    }

    void getInfo() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll, ll2;
    ll.push_front(60);
    ll.push_front(50);
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    ll2.push_front(55);
    ll2.push_front(35);
    ll2.push_front(25);
    ll2.push_front(5);

    cout << "List 1: ";
    ll.getInfo();
    cout << "List 2: ";
    ll2.getInfo();

    // Merge the two lists
    Node* mergedHead = ll.mergeList(ll.getHead(), ll2.getHead());

    // Assign merged head back to one list
    ll.setHead(mergedHead);

    cout << "Merged List: ";
    ll.getInfo();

    return 0;
}
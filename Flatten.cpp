#include <bits/stdc++.h>
using namespace std;

/* 
Definition for a Node.
*/
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
    Node(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) {
            return NULL;
        }
        
        Node* curr = head;
        while (curr != NULL) {
            if (curr->child != NULL) {
                Node* next = curr->next;
                
                // Flatten the child list
                Node* childHead = flatten(curr->child);
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;
                
                // Move to the end of the flattened child list
                while (curr->next != NULL) {
                    curr = curr->next;
                }
                
                // Reconnect with the original next node
                if (next != NULL) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper function to print the flattened list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Example setup
int main() {
    /*
        Example multilevel list:
        1 - 2 - 3 - 4
            |
            5 - 6
    */
    Node* head = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);

    head->next = n2;
    n2->prev = head;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;

    n2->child = n5;
    n5->next = n6;
    n6->prev = n5;

    Solution sol;
    Node* flatHead = sol.flatten(head);

    cout << "Flattened list: ";
    printList(flatHead);

    return 0;
}
/*
Definition for a Node.
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
// class Solution{
//     public:
//     Node* flatten(Node* head){
//         if(head==NULL){
//             return;
//         }
//         Node* curr = head;
//         while(curr!=NULL){
//             if(curr->child!=NULL){
//                 Node* next = curr->next;
//                 curr->next=flatten(curr->child);
//                 curr->next->prev = curr;
//                 curr->child = NULL;

//                 while(curr->next!=NULL){
//                     curr = curr->next;
//                 }
//                 if(next!=NULL){
//                     curr->next = next;
//                     next->prev = curr;
//                 }
//             }
//             curr=curr->next;
//         }
//         return head;

//     }
// }
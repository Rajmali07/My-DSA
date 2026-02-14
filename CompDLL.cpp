#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next = prev = NULL;
    }
};
class DList{
    Node* head;
    Node* tail;
    public:
    DList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    // Method 1
    void pop_front(){
        Node* temp = head;
        if(head==NULL){
            return;
        }
        head = head->next;
        if(head!=NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

//     // Method 2
//     void pop_front() {
//     if (head == NULL) {
//         return; // Empty list
//     }

//     Node* temp = head;

//     if (head->next == NULL) {
//         // Only one node
//         head = tail = NULL;
//         delete temp;
//     } else {
//         head = head->next;   // Move head forward
//         head->prev = NULL;   // New head has no previous
//         delete temp;
//     }
// }

    void pop_back(){
        if(head==NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;

        if(head!=NULL){
            tail->next=NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void getInfo(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    DList dll;
    dll.push_front(10);
    dll.push_front(20);
    dll.push_front(30);
    dll.push_front(40);
    dll.push_front(50);

    dll.pop_front();
    dll.push_back(80);
    dll.pop_back();
    dll.getInfo();

    return 0;
}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void deleteNode(int val){
    if(head == NULL) return; // empty list

    // Case 1: deleting the head
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Case 2: deleting from middle or end
    Node* curr = head;
    while(curr->next != NULL && curr->next->data != val){
        curr = curr->next;
    }

    if(curr->next == NULL){
        cout << "Value not found in list\n";
        return;
    }

    Node* temp = curr->next;
    curr->next = curr->next->next;

    if(temp == tail){
        tail = curr;
    }

    delete temp;
}

    void getInfo(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }
};
int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_front(50);
    ll.push_front(60);

    ll.deleteNode(40);
    
    ll.getInfo();
    return 0;
}
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
    void middleLL(){
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow != NULL){
        cout << "Middle node: " << slow->data << endl;
    }
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
    
    ll.getInfo();
    ll.middleLL();
    return 0;
}
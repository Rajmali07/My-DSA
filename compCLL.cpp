#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularList{
    Node* head;
    Node* tail;
    public:
    CircularList(){
        head = tail = NULL;
    }
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void DeleteHead(){
        Node* temp = head;
        if(head==NULL){
            return;
        }
        if(head==tail){
            delete temp;
            head=tail=NULL;
        }
        else{
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void DeleteTail(){
        Node* temp = tail;
        if(head==NULL){
            return;
        }if(head==tail){
            delete temp;
            head=tail=NULL;
        }else{
            Node* prev = head;
            while(prev->next!=tail){
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void getInfo(){
        if(head==NULL){
            return;
        }
        cout<<head->data<<" ";
        Node* temp = head->next;
        while(temp!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<head->data<<" ";
    }
};
int main(){
    CircularList cll;
    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);
    cll.insertAtHead(40); 

    cll.insertAtTail(50);
    cll.insertAtTail(60);

    // cll.DeleteHead();
    cll.DeleteTail();

    cll.getInfo();

    return 0;
}
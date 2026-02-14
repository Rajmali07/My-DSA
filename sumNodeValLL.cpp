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
    void sum(){
        Node* temp = head;
        int sum = 0;
        while(temp!=NULL){
            sum+=temp->data;
            temp=temp->next;
        }
        cout<<sum;
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
    ll.push_front(30);
    ll.push_front(30);

    ll.sum();
    // ll.getInfo();
    return 0;
}
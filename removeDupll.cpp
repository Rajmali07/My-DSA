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

    void sort() {
    if (head == NULL) return;

    Node* temp1 = head;
    while (temp1 != NULL) {
        Node* temp2 = temp1->next;
        while (temp2 != NULL) {
            if (temp1->data > temp2->data) {
                int temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

    void removeDup(){
        if(head==NULL){
            return;
        }
        
        Node* temp = head;
         while(temp->next!=NULL){
            if(temp->data == temp->next->data){
                Node* dup = temp->next;
                temp->next = dup->next;
                delete dup;
            }else{
                temp=temp->next;
            }
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
    ll.push_front(60);
    ll.push_front(20);
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(50);

    ll.sort();
    ll.removeDup();
    ll.getInfo();
    return 0;
}
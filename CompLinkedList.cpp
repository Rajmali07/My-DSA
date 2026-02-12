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
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    
    void push_front(int val){
        Node* newNode = new Node(val); //Method 1 to create new node, it create dynamic object
        // Node newNode(val); //Method 2 but it create static object

        // If linked list is empty
        if(head==NULL){
            head = tail = newNode;
            return;
        }else{ // If linked list is not empty
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            // cout<<"Pop is not possible.";
            return;
        }else{
            Node* temp = head;
            head=head->next;
            temp->next=head;
            delete temp;
        }

    }

    void pop_back(){
        if(head==NULL){
            // cout<<"Pop is not possible.";
            return;
        }else{
            Node* temp = head;
            while (temp->next!=tail)
            {
                temp = temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail = temp;
        }
    }

    void Insert(int val, int pos){
        if(pos<0){
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos-1; i++)
        {
            if(temp==NULL){
                cout<<"Invalid position";
                return;
            }
            temp=temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){
        Node* temp = head;
        int index=0;
        while(temp!=NULL){
            if(temp->data == key){
                return index;
            }
            temp=temp->next;
            index++;
        }
        return -1;
    }

    void PrintLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    List ll;
    ll.push_front(30);
    ll.push_front(35);
    ll.push_front(40);

    // ll.push_back(20);

    // ll.pop_front();

    // ll.pop_back();

    ll.Insert(50,2);

    
    ll.PrintLL();
    cout<<endl<<ll.search(35);
    return 0;
}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


void insertAtBeginning(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp = head;

    newNode->next=temp;
    temp->prev=newNode;
    head = newNode;
}

void insertAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}

void insertAtPosition(Node* &head,int val ,int pos){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp = head;
    if(pos==1){
        head->next = newNode;
        newNode->prev=head;
        head=newNode;
        return;
    }
    int count =1;
    while(temp!=NULL && count<pos-1){
        count++;
        temp=temp->next;
    }
    if(count!=pos-1){
        delete newNode;
        return;
    }
    newNode->next=temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}


int main(){
    Node* head = NULL;
    
    insertAtBeginning(head,1);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 3);

    insertAtEnd(head,4);

    insertAtPosition(head,10,2);
    print(head);

    return 0;
}
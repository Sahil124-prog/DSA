#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next=NULL;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->next=head;
    
}

void insertAtBegining(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }

    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head=newNode;
}

void deleteLastNode(Node* head){
    Node* temp = head;
    if(head->next==head){ //if one node only 
        delete head;
        head=NULL;  //as if we don't do this it will point to garbage
        return;
    }
    while(temp->next->next!=head){
        temp=temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
}

void deleteAtBeginning(Node* &head){
    Node* temp =head;
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    Node* temp1 = head;
    head=head->next;
    delete temp1;
}

void print(Node* &head){
    
    Node* temp = head;
    while (temp->next != head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;;
    cout<<"\n";
    
}
int main(){ 
    Node* head = NULL;
    insertAtBegining(head,1);
    insertAtBegining(head,2);
    insertAtEnd(head,4);
    print(head);
    // deleteLastNode(head);
    // print(head);

    deleteAtBeginning(head);
    print(head);

}
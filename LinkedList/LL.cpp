#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next = NULL;
    }
};


void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

void insertAtBeginning(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
//pass it by reference as need to change in the original linked list 

void insertAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
    Node* head = newNode;
    return;
    }

    Node* temp=  head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next= newNode;
}

void insertAtPosition(Node* &head,int pos,int val){
    Node* newNode = new Node(val);
    int count =1;
    
    if(head==NULL){
        head=newNode;
        return;
    }
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=nullptr && count<pos-1){
        count++;
        // if(count==pos) break;
        temp=temp->next;
    }

    if (count != pos - 1)
    {
        delete newNode; 
        return;         
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void DeleteAtEnd(Node* &head){
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    
    temp->next=NULL;
}


void deleteNTh(Node* head,int pos){
    if(pos==1){
        Node* temp =head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL) return;
    Node* temp1=temp->next;
    temp->next=temp->next->next;
    delete temp1;
}

int countEven(Node* head){
    Node* temp =head;
    int count=0;
    while(temp!=NULL){
        if((temp->data)%2==0){
            count++;
        }
        temp=temp->next;
    }
    return count;
}


bool keyexists(Node* &head,int key){
    Node* temp = head;
    if(temp==NULL) return false;
    if(temp->data==key) return true;
    keyexists(temp->next,key);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    //connected this two nodes
    n1->next = n2;
    n2->next=n3;
    
    // Node* head = NULL;
    Node* head = n1;
    insertAtEnd(head,4);
    print(head);
    insertAtBeginning(head,0);
    print(head);
    insertAtPosition(head,3,5);
    print(head);
    DeleteAtEnd(head);
    print(head);

    deleteNTh(head,2);
    print(head);

    cout<<countEven(head)<<"\n";

    if(keyexists(head,2)){
        cout<<"Key exists";
    }
    else{
        cout<<"Key doesnot exists";
    }
    return 0;
}



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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    //connected this two nodes
    n1->next = n2;
    n2->next=n3;
    
    Node* head = NULL;

    return 0;
}



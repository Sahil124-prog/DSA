#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
    Tree -> it is a non linear , hierarchical data structure consisting of nodes connected to edges .
    Binary Tree -> a tree is a binary tree when every node has at most two children
        Terminologies-
        `1.Leaf -> a node without any children.
        2. Internal node -> if a node has child.
        3. Siblings -> 2 nodes that have same parent
        4. Length Path -> the length of path is one less than the numner of nodes on the path.
        5. Ancestors and Descendents -> if there is a path from node A to node B , then A is called an ancestor of B and B is called a descendent of A
        6. Subtree -> any node of a tree , with all of its descendents is a subtree
        7. Level ->  the level of the node referes to its distance from the root , the root of the tree has generally level 0
        8 -> height -> maximum distance of the 

        9->depth the depth of a node is the number of nodes along the path from the root to that node
        Properties of BT
        1-> If h = height of binary tree then ,
        a-> maximum number of leaves = 2^h
        b -> maximum number of nodes = 2^(h+1)-1
        2 -> if a binary tree contains m nodes at level l , it contains at most 2m nodes at level l+1
        3 -> since a binary tree can contain at most 1 node at level 0(root), it can contain at most 2^l nodes at level l 
        4-> the total number of edges in a full binary tree with n nodes is n-1

        Types
        Full BT -> a tree of height h has all its leaves at level h , means all non leaf nodes of a FBT have two children , and the leaf node have no children

        Complete Binary tree -> all levels are filled except the last level , the last level should be filled from left to right ( and the whole heap data strucuture is based on this heap is a CBT only)




*/

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left=NULL;
        right=NULL;
    }
};

void inOrder(Node* &root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<"-> ";
    inOrder(root->right);
}

void preOrder(Node* &root){
    if(root==NULL) return;
    cout<<root->data<<"->";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* &root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"->";
}

int countnodes(Node* &root){
    if(root ==NULL) return 0;
    int x = countnodes(root->left);
    int y = countnodes(root->right);

    return x+y+1;
}

int countLeafNodes(Node* &root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    int x = countLeafNodes(root->left);
    int y = countLeafNodes(root->right);
    return x+y;
}
int main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);

        root->left->left = new Node(4);
        root->left->right = new Node(5);
        
        
        root->right->left = new Node(6);
        root->right->right = new Node(7);

        // inOrder(root);
        // preOrder(root);
        // postOrder(root);

        cout<<countnodes(root);
        cout<<"\n";
        cout<<countLeafNodes(root);

    return 0;
}
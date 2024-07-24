#include<iostream>
using namespace std;

// This is how the node of a tree is defined //
class Node
{
    public:

    int data;
    Node * left;
    Node * right;

    //Note : since each node has the address to the corresponding to th left and the right of the root, we are able to access the whole tree from the root node

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//This was the creation of the Binary tree

void buildTree(Node * root)
{
    //This is the start of the creation of a binary tree

    int var;
    cout<<"Enter the value : ";
    cin>>var;
    // If the user inputs -1, that means there is no node present over there

    if(var == -1)
    {
        return;
    }
    root = new Node(var);

    cout<<"Now Enter the data which you want to be to the left of "<<var<<" ";
    buildTree(root->left);
    cout<<"Now Enter the data which you want to be to the right of "<<var<<" ";
    buildTree(root->right);
}

//First we will look at pre-order traversal

// Pre order traversal implies that we first traverse the node, the the elements to thje left of it, and then the elements to the right of it

int main()
{
    //Now since we have created a node, let up start with the creation of a binary tree
    Node * root;
    buildTree(root);
    return 0;
}

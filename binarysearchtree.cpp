#include <iostream>
using namespace std;

class Node
{
public:
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr;  // initialize left child to null
        rightchild = nullptr; // initialize rigth child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukan nilai :";
        cin >> x;

        //1. allocate memory foor the new node
        Node *newNode = new Node();

        //2. Assign value to the data field of new node
        newNode -> info = x;

        //3. Make the left and right child of the new node point to null
           newNode ->leftchild = nullptr;
        newNode ->rightchild = nullptr;

        //4.locate the node which will be the parent of the node to be inserted
        Node * parent = nullptr;
        Node * currentNode = nullptr;
        search (x, parent, currentNode);
        
        //5. if parent is NULL (tree is empty)
        if  (parent == nullptr)
        {
            //5a. mark the new node as ROOT
            ROOT = newNode;
            
            //5b. Exit
            return;
        }

        //6. if the value in data field of new node is less than that of parent
        if (x < parent -> info)
        {
            //6a. make the left child of parent point to the new node
            parent -> leftchild = newNode;
            
            //6b. exit
            return;
        }

     
    }
};

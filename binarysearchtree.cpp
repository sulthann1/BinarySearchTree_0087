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

        //

     
    }
};

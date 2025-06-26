#include <iostream>
using namespace std;

class Node
{
public:
    int info;
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
        ROOT = nullptr; // Initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukan nilai :";
        cin >> x;

        // 1. allocate memory foor the new node
        Node *newNode = new Node();

        // 2. Assign value to the data field of new node
        newNode->info = x;

        // 3. Make the left and right child of the new node point to null
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // 4.locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // 5. if parent is NULL (tree is empty)
        if (parent == nullptr)
        {
            // 5a. mark the new node as ROOT
            ROOT = newNode;

            // 5b. Exit
            return;
        }

        // 6. if the value in data field of new node is less than that of parent
        if (x < parent->info)
        {
            // 6a. make the left child of parent point to the new node
            parent->leftchild = newNode;

            // 6b. exit
            return;
        }

        //7. if the value in the data field of the new node is greater than that of the parent
        else if (x > parent -> info)
        {
            //7a. make the right child of parent point to the new node
            parent -> rightchild = newNode;
            
            //7b. exit
            return;
        }
    }

    void search (int element, Node *&parent, Node *&currentNode)
    {
      //this function searches the currentNode of the specified node as well as the current node of its parent
      currentNode = ROOT;
      parent = nullptr;
      while ((currentNode !=nullptr) && (currentNode -> info != element))
      {
        parent = currentNode;
        if  (element < currentNode -> info)
        currentNode = currentNode ->leftchild;
        else
        currentNode = currentNode ->rightchild;
      }
    
    }

    bool isEmpty()
    {
        //check if the tree is empty
        return ROOT ==nullptr;
    }
    
};

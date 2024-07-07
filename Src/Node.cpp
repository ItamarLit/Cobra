#include <Node.h>

class Node{
    private:
        int value;
        Node* left;
        Node* right;
    public:
    // this ctor makes a new node
    Node(int value){
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }

    Node* getLeft() const{
        return this->left;
    }
    
    Node* getRight() const{
        return this->right;
    }

    int getValue() const{
        return this->value;
    }

    void setLeft(Node* n){
        this->left = n;
    }

    void setRight(Node* n){
        this->right = n;
    }

    void setValue(int v){
        this->value = v;
    }

};




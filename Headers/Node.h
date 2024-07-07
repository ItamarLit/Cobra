#ifndef NODE_H
#define NODE_H


class Node {
private:
    int value;
    Node* left;
    Node* right;
public:
    Node(int value);
    const Node* getLeft() const;
    const Node* getRight() const;
    int getValue() const;
    void setLeft(Node* n);
    void setRight(Node* n);
    void setValue(int v);
};

#endif // NODE_H

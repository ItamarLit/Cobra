#ifndef ASTNODE_H
#define ASTNODE_H

class ASTNode {
public:
    // dtor
    virtual ~ASTNode() {}
};

class NumberLiteralNode : public ASTNode {
public:
    int value;
    NumberLiteralNode(int value)
    {
        this->value = value;
    }
};

class BinaryOperationNode : public ASTNode {
public:
    char op;
    ASTNode* left;
    ASTNode* right;

    BinaryOperationNode(char op, ASTNode* left, ASTNode* right)
    {
        this->op = op;
        this->left = left;
        this->right = right;
    }

    ~BinaryOperationNode() {
        //dtor
        delete left;
        delete right;
    }
};

#endif // ASTNODE_H
#ifndef TREE
#define TREE

#include "node.h"

class u_queue;

class u_tree
{
public:
    node* root = nullptr;
    int size() const;
    void put(int value);
    node* get(int value);
    void remove(int value);
    
    void print();

    node* floor(int value);
    int rank(int value);
    u_queue keys();


private:
    int size(node *) const;
    node* floor(node* x, int value);
    int rank(int value, node* x);
    void inorder(node* x, u_queue* queue);

    node* put(node* x, int value);
    void remove(node* x, int value);

    void delete_minimum();
    void delete_minimum(node* x);

};

#endif //TREE
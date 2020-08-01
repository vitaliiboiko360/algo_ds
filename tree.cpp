#include "tree.h"

u_tree::node* u_tree::get(int value)
{
    node* cursor = root;
    while(cursor)
    {
        if (value > cursor->value)
            cursor = cursor->right;
        else if (value < cursor->value)
            cursor = cursor->left;
        else
            return cursor;
    }

    return nullptr;
}

void u_tree::put(int value)
{
    root = put(root, value);
}

u_tree::node* u_tree::put(node* x, int value)
{
    if (x == nullptr) return new node(value);

    if (x->value > value)
        x->left = put(x->left, value);
    else if (x->value < value)
        x->right = put(x->right, value);
    else
        x->value = value;
    
    return x;
}

void remove(int value)
{
    return remove(root, value);
}

void u_tree::remove(node* x, int value)
{
    if (x->value > value)
        remove(x->left, value);
    if (x->value < value)
        remove(x->right, value);
    
    delete x;
}
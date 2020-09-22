#include "tree.h"

#include <ncurses.h>

int u_tree::size() const
{
    return size(root);
}

int u_tree::size(node * x) const
{
    if (x == nullptr) return 0;
    return x->__count;
}

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
    
    x->__count = 1 + size(x->left) + size(x->right);
    return x;
}

void u_tree::delete_minimum()
{
    return delete_minimum(root);
}

void u_tree::delete_minimum(node* x)
{
    if (x->left != nullptr)
        return delete_minimum(x->left);
    
    delete x;
}

node* floor(node* x, int value)
{
    if (x == nullptr)
        return nullptr;

    if (x->value == value)
        return x;
    
    if (x->value > value)
        return floor(x->left, value);
    
    node* t = floor(x->right, value);
    if (t != nullptr)
        return t;
    
    return x;
}

node* u_tree::floor(int value)
{
    node* x = floor(root, key);
    if (x == nullptr) 
        return nullptr;
    return x->value;
}




#include "tree.h"

#include <ncurses.h>

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

void u_tree::print()
{
    initsrc();

    endwin();
}
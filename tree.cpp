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
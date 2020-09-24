#include "queue.h"

void u_queue::push_back(qu_node* x)
{
    if(!root)
    {
        root, tail = x;
        return;
    }

    tail->next = x;
    tail = x;
}
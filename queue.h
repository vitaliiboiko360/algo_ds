#ifndef QUEUE
#define QUEUE

#include "node.h"

class qu_node
{
public:
    qu_node(node* x)
    : value(x->value)
    {
    }

    qu_node* next{ nullptr };

    int value;
};

class u_iterator
{
public:
    u_iterator(qu_node* x)
    :   current_node(x) 
    {
    }

    u_iterator& operator=(qu_node* x)
    {
        this->current_node = x;
        return *this;
    }

    u_iterator& operator++()
    {
        if (current_node)
            current_node = current_node->next;
        return *this;
    }

    u_iterator operator++(int)
    {
        u_iterator iterator = *this;
        ++*this;
        return iterator;
    }

    bool operator!=(const u_iterator& iterator)
    {
        return current_node != iterator.current_node;
    }

    int operator*()
    {
        return current_node->value;
    }

private:
    qu_node* current_node;
};


class u_queue
{
    qu_node* root;
    qu_node* tail;
public:
    void push_back(qu_node* x);

    u_iterator begin()
    {
        return u_iterator(root);
    }
    u_iterator end()
    {
        return u_iterator(nullptr);
    }
};

#endif //QUEUE
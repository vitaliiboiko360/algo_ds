#include "list.h"

void u_list::push_back(int value)
{
    node* new_node = new node(value);
    node* current_last = last;

    last = new_node;
    last->prev = current_last;
    
    size++;
}

void u_list::push_front(int value)
{
    node* new_node = new node(value);
    node* current_first = first;

    first = new_node;
    first->next = current_first;

    size++;
}

void u_list::pop_back()
{
    node* last_to_delete = last;
    last = last_to_delete->prev;

    delete last_to_delete;
    size--;
}

void u_list::insert(node* pos, int value)
{
    node* new_node = new node(value);

    new_node->prev = pos->prev;
    new_node->next = pos;

    pos->prev = new_node;
       
    size++;
}
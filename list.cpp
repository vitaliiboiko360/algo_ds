#include "list.h"

void u_list::push_back(int value)
{
    node* new_node = new node(value);
    node* current_last = last;

    last = new_node;
    last->prev = current_last;
    
    size++;
}

void u_list::pop_back()
{
    node* last_to_delete = last;
    last = last_to_delete->prev;

    delete last_to_delete;
    size--;
}
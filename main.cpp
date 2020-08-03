#include "util.h"
#include "array.h"
#include "list.h"
#include "tree.h"

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>


const unsigned int size_small = 255;
rg gen(295);

void print(u_tree& map);

int main(int argc, char* argv[])
{
    u_tree map;
    u_array array;

    for(int i=0; i<100; i++)
    {
        int value = gen.get();
        map.put(value);
        array.push_back(value);
    }

    for(int i=0; i<100; i++)
    {
        std::cout<<map.get(array[i])->value<<", ";
    }
    std::cout<<"\n\n";

    print(map);
    
    return 0;
}

void print_node(u_tree::node* x)
{
    if (x == nullptr) return;

    std::cout<<x->value<<"\n";

    print_node(x->left);
    print_node(x->right);
}

void print(u_tree& map)
{
    print_node(map.root);
}
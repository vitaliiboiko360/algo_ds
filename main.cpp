#include "util.h"
#include "array.h"
#include "list.h"
#include "tree.h"

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <map>


const unsigned int size_small = 255;
rg gen(295);

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


    std::map<int, int> tree_map;

    for(int i=0; i<100; i++)
    {
        tree_map[i] = gen.get();
    }

    for(int i=0; i<100; i++)
    {
        std::cout<<tree_map[i]<<", ";
    }
    std::cout<<"\n\n";

    
    return 0;
}
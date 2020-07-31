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
    
    return 0;
}
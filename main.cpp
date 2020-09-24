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
        array.push_back(value);
        map.put(value);
    }

    std::cout<<"map.size()="<<map.size()<<"\n";
    for(int i=0; i<100; i++)
    {
        std::cout<<array[i]<<" ";
    }

    std::cout<<"\n\n\n";

    auto l = [](int value) -> void {
        std::cout<<value<<" ";
    };

    map.traverse(l);

    std::cout<<"\n\n";

    
    return 0;
}
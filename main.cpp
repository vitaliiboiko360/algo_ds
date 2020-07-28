#include "util.h"
#include "array.h"
#include "list.h"

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>


const unsigned int size_small = 255;
rg gen(295);

int main(int argc, char* argv[])
{
    u_list v_nums;
    std::vector<u_list::node*> v_nodes_to_delete;
    for(int i=0; i<100; i++)
    {
        v_nums.push_back(gen.get());
        if (i % 3 == 0)
        {
            v_nodes_to_delete.push_back(v_nums.last);
        }
        std::cout << v_nums.last->value <<", ";
    }
    std::cout<<"\n\n";

    for(int i=0; i<100; i++)
    {
        std::vector<u_list::node*>::iterator it;
        if ((it = std::find(v_nodes_to_delete.begin(), v_nodes_to_delete.end(), v_nums.last)) != v_nodes_to_delete.end())
        {
            v_nums.erase(*it);
        }

        if(v_nums.size > 0)
        {
            std::cout << v_nums.last->value << ", ";
            v_nums.pop_back();
        }
    }
    std::cout<<"\n\n";
    
    return 0;
}
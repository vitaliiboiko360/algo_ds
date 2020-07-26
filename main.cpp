#include "util.h"
#include "array.h"
#include "list.h"

#include <iostream>
#include <limits>
#include <vector>


const unsigned int size_small = 255;
rg gen(295);

int main(int argc, char* argv[])
{
    u_list v_nums;
    
    for(int i=0; i<10; i++)
    {
        v_nums.push_back(gen.get());
    }

    for(int i=0; i<10; i++)
    {
       if(v_nums.size > 0)
       {
           std::cout << v_nums.last->value << "\n";
       }
       v_nums.pop_back();
    }

    return 0;
}
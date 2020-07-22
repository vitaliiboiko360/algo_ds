#include "util.h"
#include "array.h"

#include <iostream>
#include <limits>


const unsigned int size_small = 255;
rg gen(295);

int main(int argc, char* argv[])
{
    u_array sz_collctn(size_small);
    
    for(int i=0; i<100; i++)
    {
        sz_collctn.push_back(gen.get());
    }
    std::cout<<"\n\n";    

    for(int i=0; i<100; i++)
    {
        std::cout << sz_collctn.pop_back()  << ", ";
    }
    std::cout<<"\n";


    return 0;
}
#include "util.h"
#include "array.h"

#include <iostream>
#include <limits>
#include <vector>


const unsigned int size_small = 255;
rg gen(295);

int main(int argc, char* argv[])
{
    // u_array sz_collctn;
    
    // for(int i=0; i<10; i++)
    // {
    //     sz_collctn.push_back(gen.get());
    // }
    
    // std::cout<<"\n\n\n";    

    // for(int i=0; i<10; i++)
    // {
    //     std::cout << sz_collctn.pop_back()  << ", ";
    // }
    // std::cout<<"\n";

    // std::cout<<"\n\n\n";

    std::vector<int> v_nums;

    for(int i=0; i<10; i++)
    {
        v_nums.push_back(gen.get());
    }

    for(int i=0; i<11; i++)
    {
        std::cout<<"i= "<<i<<" "<<v_nums.back()<<"\n";
        v_nums.pop_back();
    }

    return 0;
}
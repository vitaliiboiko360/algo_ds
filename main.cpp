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
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> fadcf2d61710a700befbcbdb27ffcded8095ef46
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
<<<<<<< HEAD
=======
=======
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
>>>>>>> 66560a9227bcd8089a5fa67275feef0d80d74461
>>>>>>> fadcf2d61710a700befbcbdb27ffcded8095ef46

    return 0;
}
#ifndef NODE
#define NODE

struct node
{
    node* left = nullptr;
    node* right = nullptr;
    int value; 
    int __count;

    node(int val) : value(val) {}
};

#endif //NODE
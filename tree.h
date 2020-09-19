
struct u_tree
{
    struct node
    {
        node* left = nullptr;
        node* right = nullptr;
        int value; 
        int __counter;

        node(int val) : value(val) {}
    };

    node* root = nullptr;

    unsigned long long size;

    void put(int value);
    node* get(int value);
    void remove(int value);
    
    void print();

private:
    node* put(node* x, int value);
    void remove(node* x, int value);

    void delete_minimum();
    void delete_minimum(node* x);

};

struct u_tree
{
    struct node
    {
        node* left = nullptr;
        node* right = nullptr;
        int value;
        node() = default;
        node(int val) : value(val) {}
    };

    node* root = nullptr;

    unsigned long long size;

    void put(int value);
    node* get(int value);
    void remove(int value);
    
private:
    node* put(node* x, int value);
};
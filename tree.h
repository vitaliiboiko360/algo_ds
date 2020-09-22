
struct u_tree
{
    struct node
    {
        node* left = nullptr;
        node* right = nullptr;
        int value; 
        int __count;

        node(int val) : value(val) {}
    };

    node* root = nullptr;
    int size() const;
    void put(int value);
    node* get(int value);
    void remove(int value);
    
    void print();

    node* floor(int value);

private:
    node* put(node* x, int value);
    void remove(node* x, int value);
    int size(node *) const;

    void delete_minimum();
    void delete_minimum(node* x);

};

struct node
{
    node* left = nullptr;
    node* right = nullptr;
    int value; 
    int __count;

    node(int val) : value(val) {}
};
struct u_tree
{
    node* root = nullptr;
    int size() const;
    void put(int value);
    node* get(int value);
    void remove(int value);
    
    void print();

    node* floor(int value);
    int rank(int value);
    void traverse(void(*apply_on_each_value)(int));


private:
    int size(node *) const;
    node* floor(node* x, int value);
    int rank(int value, node* x);
    void traverse(node* x, void(*apply_on_each_value)(int value));

    node* put(node* x, int value);
    void remove(node* x, int value);

    void delete_minimum();
    void delete_minimum(node* x);

};
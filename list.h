
struct u_list
{
    struct node
    {
        node* prev = nullptr;
        node* next = nullptr;

        int value;
        node() = default;
        node(int val): value(val) {}
    };

    
    unsigned long long size;

    node* first = nullptr;
    node* last = nullptr;

    void push_back(const int value);
    void pop_back();
    void push_front(const int value);
    void insert(node* pos, int value);
    node* erase(node* pos);
};
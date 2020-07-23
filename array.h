
class u_array 
{
    const int m_grow_factor = 2;

    unsigned long long int m_capacity = 0;
    unsigned long long int m_size = 0;
    int * m_buffer = nullptr;

public:
    u_array() = default;
    u_array(unsigned int size);
    ~u_array();

    void push_back(int value);
    int pop_back();

    int operator[](unsigned int index) { return m_buffer[index]; }

    unsigned long long int size() const { return m_size; }

private:
    void grow_buffer();
    void shrink_buffer();
};


class u_array 
{
    unsigned long long int m_capacity = 0;
    unsigned long long int m_size = 0;
    int * m_buffer = nullptr;

public:
    u_array() = default;
    u_array(unsigned int size);
    ~u_array();

    void push_back(int value) { m_buffer[m_size++] = value; }

    int operator[](unsigned int index) { return m_buffer[index]; }

    unsigned long long int size() const { return m_size; }
};

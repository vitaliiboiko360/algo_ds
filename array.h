
class u_array 
{
    unsigned long long int m_size;
    char * m_buffer;

public:
    u_array();
    u_array(unsigned int size);
    ~u_array();

    unsigned long long int size() const { return m_size; }
};
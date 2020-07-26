#include "array.h"

#include <iostream>
#include <cstring>

#define DEBUG 1

u_array::u_array(unsigned int size)
    : m_size(size)
    , m_capacity(size)
    , m_buffer(new int[size])
{}

u_array::~u_array()
{
    if (m_buffer)
    {
        delete[](m_buffer);
    }
}

void u_array::push_back(int value)
 {
    if (m_size >= m_capacity)
    {
        grow_buffer();
    }

    m_buffer[m_size++] = value; 
 }

int u_array::pop_back()
{
    int ret = m_buffer[m_size--];

    if (m_size <= ((m_capacity / m_grow_factor) / m_grow_factor))
    {
        shrink_buffer();
    }

    return ret;
}

void u_array::grow_buffer()
{
    if (m_capacity == 0)
    {
        m_capacity = 1;
        m_buffer = new int[m_capacity];
        return;
    }
    
    m_capacity = m_capacity * m_grow_factor;
    
    int* new_buffer = new int[m_capacity];
    std::memcpy(new_buffer, m_buffer, m_size*sizeof(int));
    delete[] m_buffer;
    m_buffer = new_buffer;
}

void u_array::shrink_buffer()
{
    int new_capacity = m_capacity / m_grow_factor;
    int* new_buffer = new int[new_capacity];
    std::memcpy(new_buffer, m_buffer, m_size*sizeof(int));
    delete[] m_buffer;
#ifdef DEBUG
    std::cout<<"\n\nSHRINK: old_cap="<<m_capacity<<" new_cap="<<new_capacity<<"\n\n";
#endif
    m_buffer = new_buffer;
    m_capacity = new_capacity;
}
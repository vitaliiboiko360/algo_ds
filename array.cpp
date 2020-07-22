#include "array.h"

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

int u_array::pop_back()
{
    return m_buffer[m_size--];
}
#include "array.h"

u_array::u_array()
    : m_size(0)
    , m_buffer(nullptr)
{
}

u_array::u_array(unsigned int size)
    : m_size(size)
    , m_buffer(new char[size])
{}

u_array::~u_array()
{
    if (m_buffer)
    {
        delete[](m_buffer);
    }
}
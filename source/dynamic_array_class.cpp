#include <dynamic_array_class.h>


Boss_Array::Boss_Array()
{

}

Boss_Array::Boss_Array(int _size)
{
    allocate(_size);
}

Boss_Array::~Boss_Array()
{
    clear();
}


void Boss_Array::allocate(int _size)
{
    m_array_ptr = new int[_size];
    for(int i = 0; i < _size; ++i)
    {
        m_array_ptr[i] = 0;
    }
    m_size = _size;
}

void Boss_Array::clear()
{
    delete[] m_array_ptr;
    m_array_ptr = nullptr;
    m_size = 0;
}


int Boss_Array::get_size()
{
    return m_size;
}

void Boss_Array::set_element(int _index, int _number)
{
    m_array_ptr[_index] = _number;
}

int Boss_Array::get_element(int _index)
{
    return m_array_ptr[_index];
}


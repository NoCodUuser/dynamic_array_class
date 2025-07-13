#pragma once


class Boss_Array
{
private:
    int m_size = 0;
    int* m_array_ptr = nullptr;

public:
    Boss_Array();
    Boss_Array(int _size);
    ~Boss_Array();

    void allocate(int _size);
    void clear();

    int get_size();
    void set_element(int _index, int _number);
    int get_element(int _index);
};





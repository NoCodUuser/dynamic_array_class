#include <iostream>

#include <dynamic_array_class.h>


int main()
{
    Boss_Array array_1(10); // создал объект


    for(int i = 0; i < array_1.get_size(); ++i)
    {
        array_1.set_element(i, 2);
    }

    for(int i = 0; i < array_1.get_size(); ++i)
    {
        std::cout << array_1.get_element(i) << " ";
    }
    std::cout << std::endl;


    return 0;
}

#include <vector>
#include <iostream>


template<typename T> 
void printVector(const std::vector<T> & vec)
{
    for (auto const & val : vec)
        std::cout << val << " ";

    std::cout << std::endl;
}
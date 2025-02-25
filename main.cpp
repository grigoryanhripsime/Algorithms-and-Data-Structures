#include "sorting_algorithms/SortingAlgorithms.hpp"
#include <iostream>

int main()
{
    SortingAlgorithms ob;
    std::array<int, 6> arr = {6, 5, 4, 3, 2, 1};
    arr = ob.insertion_sort(arr);
    for (size_t i = 0; i < 6; i++)
        std::cout<<arr[i]<<std::endl;
}
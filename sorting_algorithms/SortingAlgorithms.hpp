#pragma once

#include <array>
#include <cstddef>
#include <algorithm>

class SortingAlgorithms
{
    public:
    template <typename T, size_t N>
    std::array<T, N> insertion_sort(std::array<T, N> arr);
};

#include "Insertion_sort/insertion_sort.tpp"
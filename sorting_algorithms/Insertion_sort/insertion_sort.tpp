#include "SortingAlgorithms.hpp"

template <typename T, size_t N>
std::array<T, N> SortingAlgorithms::insertion_sort(std::array<T, N> arr)
{
    if (std::is_sorted(arr.begin(), arr.end()))
        return arr;
    T tmp;
    for (size_t i = 1; i < N; i++)
    {
        tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
    return arr;
}
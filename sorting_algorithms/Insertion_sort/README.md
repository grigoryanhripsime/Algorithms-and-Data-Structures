# Insertion Sort Implementation in C++

## Introduction
This repository contains an implementation of the **Insertion Sort** algorithm using C++ and `std::array`. The implementation is encapsulated in a class called `SortingAlgorithms` with a templated `insertion_sort` function.

## What is Insertion Sort?
Insertion Sort is a simple and efficient sorting algorithm that works similarly to how we sort playing cards in our hands. It builds the sorted array one element at a time by comparing and inserting elements into their correct position.

### **Time Complexity**
- **Best case (Already Sorted):** O(n)
- **Average case:** O(n²)
- **Worst case (Reverse Sorted):** O(n²)

### **Space Complexity**
- **O(1) (In-place sorting algorithm)**

## Implementation Details
- The algorithm checks if the array is already sorted using `std::is_sorted` to optimize performance.
- The `SortingAlgorithms` class contains a templated function, allowing sorting of various data types.
- The function operates on `std::array` with a fixed size.

### **main.cpp**
```cpp
#include <iostream>
#include "SortingAlgorithms.hpp"

int main()
{
    SortingAlgorithms ob;
    std::array<int, 6> arr = {5, 2, 4, 6, 1, 3};
    arr = ob.insertion_sort(arr);
    
    for (size_t i = 0; i < 6; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
```

## How to Compile and Run
```sh
c++ main.cpp -I sorting_algorithms/ -o sort.out
./sort.out
```

## Example Output
```
1 2 3 4 5 6
```

## Advantages of Insertion Sort
- **Efficient for small datasets**
- **Adaptive**: Performs well when data is nearly sorted
- **Stable**: Maintains the relative order of equal elements

## Limitations
- **Not efficient for large datasets** (O(n²) complexity)

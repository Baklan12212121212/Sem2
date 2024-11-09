#include "shaker_sort.h"

template<typename T>
void shakerSort(std::vector<T>& arr) {
    if (arr.empty()) return;  

    bool swapped = true;
    size_t start = 0;
    size_t end = arr.size() - 1;

    while (swapped) {
        swapped = false;


        for (size_t i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;  

        --end;
        swapped = false;

        
        for (size_t i = end; i > start; --i) {
            if (arr[i] < arr[i - 1]) {
                std::swap(arr[i], arr[i - 1]);
                swapped = true;
            }
        }

        ++start;
    }
}


template void shakerSort<int>(std::vector<int>&);
template void shakerSort<double>(std::vector<double>&);

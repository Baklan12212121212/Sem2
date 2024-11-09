#include "shaker_sort.h"

template<typename T>
void shakerSort(std::vector<T>& arr) {
    if (arr.empty()) return;  // Проверка на пустой массив

    bool swapped = true;
    size_t start = 0;
    size_t end = arr.size() - 1;

    while (swapped) {
        swapped = false;

        // Проход слева направо
        for (size_t i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;  // Если обменов не было, массив отсортирован

        --end;
        swapped = false;

        // Проход справа налево
        for (size_t i = end; i > start; --i) {
            if (arr[i] < arr[i - 1]) {
                std::swap(arr[i], arr[i - 1]);
                swapped = true;
            }
        }

        ++start;
    }
}

// Явные инстанцирования шаблонов для часто используемых типов
template void shakerSort<int>(std::vector<int>&);
template void shakerSort<double>(std::vector<double>&);

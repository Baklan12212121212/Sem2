#include "binary_insertion_sort.h"

template<typename T>
int binarySearch(const std::vector<T>& arr, T key, int start, int end) {
    if (end <= start) return start; 

    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start; // Возвращает индекс вставки
}


template<typename T>
void binaryInsertionSort(std::vector<T>& arr) {
    if (arr.empty()) return;  // Проверка на пустой массив

    for (size_t i = 1; i < arr.size(); ++i) {
        T key = arr[i];
        int pos = binarySearch(arr, key, 0, i);

        // Сдвиг элементов вправо
        for (size_t j = i; j > pos; --j) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = key;
    }
}


// Явные инстанцирования шаблонов для часто используемых типов
template void binaryInsertionSort<int>(std::vector<int>&);
template void binaryInsertionSort<double>(std::vector<double>&);

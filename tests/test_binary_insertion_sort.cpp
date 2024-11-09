#include <gtest/gtest.h>
#include "binary_insertion_sort.h"

TEST(BinaryInsertionSortTests, EmptyArray) {
    std::vector<int> arr = {};
    binaryInsertionSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(BinaryInsertionSortTests, SingleElement) {
    std::vector<int> arr = { 5 };
    binaryInsertionSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 5 }));
}

TEST(BinaryInsertionSortTests, SortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    binaryInsertionSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

TEST(BinaryInsertionSortTests, ReverseArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    binaryInsertionSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

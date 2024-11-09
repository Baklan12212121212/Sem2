#include <gtest/gtest.h>
#include "shaker_sort.h"

TEST(ShakerSortTests, EmptyArray) {
    std::vector<int> arr = {};
    shakerSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(ShakerSortTests, SingleElement) {
    std::vector<int> arr = { 5 };
    shakerSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 5 }));
}

TEST(ShakerSortTests, SortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    shakerSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

TEST(ShakerSortTests, ReverseArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    shakerSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

TEST(ShakerSortTests, MixedArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9, 2, 6 };
    shakerSort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 1, 2, 3, 4, 5, 6, 9 }));
}

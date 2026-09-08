#include <cassert>
#include <iostream>
#include <vector>

#include "indices.h"

void testMultipleOccurrences() {
    std::vector<int> result =
        findAllIndices({4, 2, 4, 7, 4}, 4);

    assert((result == std::vector<int>{0, 2, 4}));
}

void testKeyNotPresent() {
    std::vector<int> result =
        findAllIndices({1, 2, 3}, 9);

    assert(result.empty());
}

void testEmptyArray() {
    std::vector<int> result =
        findAllIndices({}, 5);

    assert(result.empty());
}

int main() {
    testMultipleOccurrences();
    testKeyNotPresent();
    testEmptyArray();

    std::cout << "Task 3: ALL TESTS PASSED" << std::endl;

    return 0;
}
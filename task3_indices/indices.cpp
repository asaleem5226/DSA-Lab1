#include "indices.h"

std::vector<int> findAllIndices(
    const std::vector<int>& values,
    int key
) {
    std::vector<int> indices;

    for (int i = 0; i < static_cast<int>(values.size()); ++i) {
        if (values[i] == key) {
            indices.push_back(i);
        }
    }

    return indices;
}
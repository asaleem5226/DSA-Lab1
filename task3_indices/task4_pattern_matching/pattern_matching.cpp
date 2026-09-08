#include "pattern_matching.h"

int naiveSearch(const std::string& text, const std::string& pattern) {
    // An empty pattern is considered to occur at index 0
    if (pattern.empty()) {
        return 0;
    }

    if (pattern.length() > text.length()) {
        return -1;
    }

    for (size_t i = 0; i <= text.length() - pattern.length(); ++i) {
        bool match = true;

        for (size_t j = 0; j < pattern.length(); ++j) {
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return static_cast<int>(i);
        }
    }

    return -1;
}

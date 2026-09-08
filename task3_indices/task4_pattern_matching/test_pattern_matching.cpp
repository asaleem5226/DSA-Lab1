#include <cassert>
#include <iostream>
#include "pattern_matching.h"

int main() {
    std::string text1 = "data structures";
    std::string pattern1 = "data";
    int result1 = naiveSearch(text1, pattern1);

    std::string text2 = "hello world";
    std::string pattern2 = "world";
    int result2 = naiveSearch(text2, pattern2);

    std::string text3 = "algorithm";
    std::string pattern3 = "xyz";
    int result3 = naiveSearch(text3, pattern3);

    std::string text4 = "abc";
    std::string pattern4 = "";
    int result4 = naiveSearch(text4, pattern4);

    assert(result1 == 0);
    assert(result2 == 6);
    assert(result3 == -1);
    assert(result4 == 0);

    std::cout << "Test 1 - Pattern at beginning\n";
    std::cout << "Text: " << text1 << "\n";
    std::cout << "Pattern: " << pattern1 << "\n";
    std::cout << "Output index: " << result1 << "\n\n";

    std::cout << "Test 2 - Pattern at end\n";
    std::cout << "Text: " << text2 << "\n";
    std::cout << "Pattern: " << pattern2 << "\n";
    std::cout << "Output index: " << result2 << "\n\n";

    std::cout << "Test 3 - Pattern not present\n";
    std::cout << "Text: " << text3 << "\n";
    std::cout << "Pattern: " << pattern3 << "\n";
    std::cout << "Output index: " << result3 << "\n\n";

    std::cout << "Test 4 - Empty pattern\n";
    std::cout << "Text: " << text4 << "\n";
    std::cout << "Pattern: empty\n";
    std::cout << "Output index: " << result4 << "\n\n";

    std::cout << "Task 4: ALL TESTS PASSED\n";

    return 0;
}
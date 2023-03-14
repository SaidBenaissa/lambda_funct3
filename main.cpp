#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

    std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a < b; });

    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

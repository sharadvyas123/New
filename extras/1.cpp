#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums; // like array .
    nums.push_back(10);
    nums.push_back(20);

    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
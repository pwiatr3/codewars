#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

unsigned int countBits(unsigned long long n) {

    // SOLUTION 1
    // std::string binary {};
    // unsigned int count = 0;
    // while(n) {
    //     binary = (char) ((n % 2) + '0') + binary; 
    //     n /= 2;
    // }
    // count = std::count(begin(binary), end(binary), '1');
    // return count;

    // SOLUTION 2
    // unsigned int count = 0;
    // while(n) {
    //     count += n & 1;
    //     n = n >> 1;
    // }
    // return count;

    // SOLUTION 3 Brian Kernigham's algorithm
    unsigned int count = 0;
    while(n) {
        n &= (n-1);
        count++;
    }
    return count;
}


int main() {

    std::vector<int> entryVal {0, 4, 7, 9, 10, 26, 77231418, 12525589, 3811, 392902058};
    //std::vector<int> entryVal {10};
    for (const auto & num : entryVal) {
        std::cout << "num = " << num << " count = " << countBits(num) << '\n'; 
    }
    return 0;
}
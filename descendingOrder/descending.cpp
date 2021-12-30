/*
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
*/
#include <cinttypes>

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#include <string>


// Solution 1
// uint64_t descendingOrder(uint64_t a)
// {
//     std::vector<int> digits;
//     size_t numberOfDigits = 0;
//     uint64_t numberDescended = 0;

//     while(a) {
//         digits.push_back(a % 10);
//         a /= 10;
//         numberOfDigits++;
//     }
//     std::sort(std::begin(digits), std::end(digits), std::greater<uint64_t>());
    
//     uint64_t multiplier = 1;
//     for(int i = 0; i < numberOfDigits; i++) {
//         numberDescended += digits[numberOfDigits - 1 - i] * multiplier;
//         multiplier *= 10;
//     }
//     return numberDescended;
// }

// Solution 2
uint64_t descendingOrder(uint64_t a)
{
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
}


int main() {

std::cout << descendingOrder(0) << '\n';
std::cout << descendingOrder(1) << '\n';
std::cout << descendingOrder(15) << '\n';
std::cout << descendingOrder(1021) << '\n';
std::cout << descendingOrder(123456789) << '\n';

}
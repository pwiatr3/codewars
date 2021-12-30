#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string decToBinary(int num) {
    std::string binary {};
    while(num) {
        binary = (char) ((num % 2) + '0') + binary; 
        //binary.append(1, (num % 2) + '0');
        num /= 2;
    }
    //std::reverse(begin(binary), end(binary));
    return binary;
}


int main() {
    int num = 8;
    std::cout << "num = " << num << " binary = " << decToBinary(num) << '\n'; 
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

void printVec(std::string name, std::vector<int>&v) {
    std::cout << "std::vector<int> " << name << " = { ";
    for( int i = 0; i < v.size(); i++) {
        if(i == v.size() - 1) {
            std::cout << v.at(i) << " ";
            break;    
        }
        std::cout << v.at(i) << ", ";
    }
    std::cout << "};\n";
}

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
      // your code
       
        // printVec("a", a);
        // printVec("b", b);

         // squering vec a
        for (auto& num : a) {
            num = num * num;
        }
        // printVec("a2", a);

        std::sort(begin(a), end(a));
        std::sort(begin(b), end(b));

        // check if all numbers from vec a have their squared equivalent in vec b
        return a == b;
    }
};

int main() {

    // Valid arrays
    // std::vector<int> a = { 121, 144, 19, 161, 19, 144, 19, 11 };
    // std::vector<int> b = { 14641, 20736, 361, 25921, 361, 20736, 362, 121 };

    // Ivalid arrays
    // std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    // std::vector<int> b = {132, 14641, 20736, 361, 25921, 361, 20736, 361};

    std::vector<int> a = { 2, 2, 3 };
    std::vector<int> b = { 4, 9, 9 };

    Same s {};
    bool result = false;
    result = s.comp(a, b);
    std::cout << "comp = " << std::boolalpha << result << '\n';

}
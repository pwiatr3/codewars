#include <iostream>
#include <map>
#include <string>
#include <utility>

#define SOLUTION 2

class PrimeDecomp
{
public:
    static bool isPrime(int x);
    static std::string factors(int lst);
};

int main() {
    // int num = 11011;
    int num = 86240;
    std::cout <<"num = " << num << " decomposition = " << PrimeDecomp::factors(num) << '\n';
    return 0;
}

bool PrimeDecomp::isPrime(int x) {
    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

#if SOLUTION == 1

std::string PrimeDecomp::factors(int lst) {
    std::map<int, int> m {};
    std::string str;
    int divisor = 2;
    while(lst > 1) {
        if(isPrime(divisor)) {
            while(lst % divisor == 0) {
                // if 
                if(m.count(divisor) == 0) {
                    m.insert(std::pair<int, int> (divisor, 1)); 
                }
                else {
                    m.at(divisor)++;
                }         
                lst /= divisor;
            }  
        }
        divisor++;
    }  

    // create string from map
    for(auto& p : m) {
        if(p.second > 1) {
            str +="(" + std::to_string(p.first) + "**" + std::to_string(p.second) + ")";
        }
        else {
            str +="(" + std::to_string(p.first) + ")";    
        }
    }
    return str;
}
#endif

#if SOLUTION == 2
std::string PrimeDecomp::factors(int lst) {
    return "empty";
}
#endif
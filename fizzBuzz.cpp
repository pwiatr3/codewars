#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;
void fizzBuzz();


int main() {
    fizzBuzz();
    return 0;
}

void fizzBuzz() {
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            cout << "Fizz Buzz\n";
        }
        else if(i % 3 == 0) {
            cout << "Fizz\n";
        }
        else if(i % 5 == 0) {
            cout << "Buzz\n";
        }
        else {
            cout << i << '\n';
        }
    }
}

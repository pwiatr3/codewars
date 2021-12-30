#include <iostream>

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
    int number = 1; // if parameters are correct ball will be seen at least one time
    double bounceHeight = h * bounce; // height the ball reaches after bounce

    if(h > 0 && bounce > 0.0 && bounce < 1.0 && window < h) {

        while (bounceHeight > window) {
            bounceHeight *= bounce; 
            number += 2;    
        }  
        return number;
    }
    return -1;  
}

int main() {
    std::cout << Bouncingball::bouncingBall(3, 0.66, 1.5) << '\n';
    std::cout << Bouncingball::bouncingBall(30, 0.66, 1.5) << '\n';
}
#include <iostream>
#include <cmath>

int main() {
    double x = 1;
    while (true) {
        double y = pow(1 + (1 / x), x);
        std::cout << y << std::endl;
        x += 1;
    }
    return 0;
}

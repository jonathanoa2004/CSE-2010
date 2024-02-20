#include <iostream>

int main() {
    int x = 0;
    int y = 5;

  while (x < y) {
        std::cout << x << std::endl;
        x = x + 3;

if (x % 2 == 0) {
            std::cout << "x is even" << std::endl;
        } else {
            std::cout << "x is odd" << std::endl;

      }
    }

    return 0;
}
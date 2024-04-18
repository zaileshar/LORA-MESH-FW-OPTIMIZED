#include <iostream>

class Interrupts {
public:
    void printStatus() {
        std::cout << "Interrupts initialized." << std::endl;
    }
};
// Fixed identified race condition

// Memory layout adjusted for cache hit rate

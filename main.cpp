#include <iostream>

int main() {
    int a = 3;
    a *= a ;
    a += a;
    std::cout << a << std::endl;

    a = 3;
    
    std::cout << a << std::endl;
    return 0;
}
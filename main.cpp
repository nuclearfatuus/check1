#include <iostream>

int main() {

    int a = 1902;
    int b = 0;

    if (a/1000 >= 0) {
        if (a/1000 > 0){
            b += 1000*(a/1000 - 1);
        }
        else
            b += 1000*(10-1);
    }
    else
        std::cout << "neg" << std::endl;

    a %= 1000;

    if (a/100 >= 0) {
        if (a/100 > 0){
            b += 100*(a/100 -1);
        }
        else
            b += 100*(10-1);
    }
    else
        std::cout << "neg" << std::endl;

    a %= 100;

    if (a/10 >= 0) {
        if (a/10 > 0) {
            b += 10*(a/10 -1);
        }
        else
            b += 10*(10-1);
    }
    else
        std::cout << "neg" << std::endl;

    a %= 10;

    if (a/1 >= 0) {
        if (a/1 >0) {
            b += 1*(a/1 - 1);
        }
        else
            b += 1*(10-1);
    }
    else
        std::cout << "neg" << std::endl;

    std::cout << b << std::endl;

    return 0;
}
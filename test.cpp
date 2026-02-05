#include <iostream>

int main(){
    float a = 1;
    double b = 1;

    while (a + 1 != 1){
        a /= 10;
    }
    while (b + 1 != 1){
        b /= 10;
    }
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}
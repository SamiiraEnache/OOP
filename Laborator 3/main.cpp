#include <iostream>
#include "Math.h"

int main()
{
    // Add(int, int)
    std::cout << "1 + 2 = " << Math::Add(1, 2) << std::endl;

    // Add(int, int, int)
    std::cout << "1 + 2 + 3 = " << Math::Add(1, 2, 3) << std::endl;

    // Add(double, double)
    std::cout << "3.14 + 2.71 = " << Math::Add(3.14, 2.71) << std::endl;

    // Add(double, double, double)
    std::cout << "3.14 + 2.71 + 1.41 = " << Math::Add(3.14, 2.71, 1.41) << std::endl;

    // Mul(int, int)
    std::cout << "2 * 3 = " << Math::Mul(2, 3) << std::endl;

    // Mul(int, int, int)
    std::cout << "2 * 3 * 4 = " << Math::Mul(2, 3, 4) << std::endl;

    // Mul(double, double)
    std::cout << "3.14 * 2.71 = " << Math::Mul(3.14, 2.71) << std::endl;

    // Mul(double, double, double)
    std::cout << "3.14 * 2.71 * 1.41 = " << Math::Mul(3.14, 2.71, 1.41) << std::endl;

    // Add(int, ...)
    std::cout << "1 + 2 + 3 + 4 + 5 = " << Math::Add(5, 1, 2, 3, 4, 5) << std::endl;

    // Add(const char*, const char*)
    char* str1 = Math::Add("Hello, ", "world!");
    char* str2 = Math::Add("Goodbye, ", nullptr);
    if (str1 != nullptr) {
        std::cout << str1 << std::endl;
        delete[] str1;
    }
    else {
        std::cerr << "Error: One or both strings are nullptr." << std::endl;
    }
    if (str2 != nullptr) {
        std::cout << str2 << std::endl;
        delete[] str2;
    }
    else {
        std::cerr << "Error: One or both strings are nullptr." << std::endl;
    }

    return 0;
}

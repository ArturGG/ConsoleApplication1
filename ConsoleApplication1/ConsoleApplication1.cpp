
#include <iostream>

template<int n> struct Factorial {
    static const int value = n * Factorial<n - 1>::value;
};

template<> struct Factorial<0> {
    static const int value = 1;
};

int main()
{
    std::cout << "Factorial of 5: " << Factorial<5>::value << std::endl;
    std::cout << "Factorial of 6: " << Factorial<6>::value << std::endl;
    std::cout << "Factorial of 7: " << Factorial<7>::value << std::endl;
    return 0;
}

#include <iostream>
#include <iomanip>

template<typename T>
void                iter(T array[], T length, T function(T elem)) {
    for (int i = 0;i < length;i++) {
        std::cout << "Original: " << array[i] << "\t";
        array[i] = function(array[i]);
        std::cout << "AfterIter: " << array[i] << std::endl;
    }
}

template<typename T>
T                 minus1(T n) {
    return n - 1;
}

int                 main() {
    int n = 5;
    char c = 5;
    float f = 5.0;
    int intArray[5] = {10, 11, 12, 13, 14};
    char charArray[5] = {'b', 'c', 'd', 'e', 'f'};
    float flArray[5] = {1.22, 2.22, 3.22, 4.22, 5.22};
    std::cout << "-------------------------------INT------------------------------" << std::endl;
    iter<int>(intArray, n, minus1<int>);
    std::cout << "-------------------------------CHAR------------------------------" << std::endl;
    iter<char>(charArray, c, minus1<char>);
    std::cout << "-------------------------------FLOAT------------------------------" << std::endl;
    iter<float>(flArray, f, minus1<float>);
    return 0;
}
#include <iostream>
#include <iomanip>

template<typename T>
void       swapValues(T val1, T val2) {
    std::cout << "Before -- val1: " << val1 << " val2: " << val2 << std::endl;
    T tmp = val1;
    val1 = val2;
    val2 = tmp;
    std::cout << "After -- val1: " << val1 << " val2: " << val2 << std::endl;
}

template<typename T>
T       min(T val1, T val2) {
    return (val1 >= val2) ? val2 : val1;    
}

template<typename T>
T       max(T val1, T val2) {
    return (val1 > val2) ? val1 : val2;    
}

int             main()
{
    swapValues<int>(10, 5);
    std::cout << "Min: " << min<int>(10, 5) << std::endl;
    std::cout << "Max: " << max<int>(10, 5) << std::endl;
    swapValues<char>('a', 'z');
    std::cout << "Min: " << min<char>('a', 'z') << std::endl;
    std::cout << "Max: " << max<char>('a', 'z') << std::endl;
    swapValues<std::string>("Hello", "World");
    std::cout << "Min: " << min<std::string>("Hello", "World") << std::endl;
    std::cout << "Max: " << max<std::string>("Hello", "World") << std::endl;
    return 0;    
}
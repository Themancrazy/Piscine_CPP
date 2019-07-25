#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base                *generate(void) {
    Base *b;
    int base = rand() % 3;
    if (base == 1) {
        b = new A;
        return (b);
    }
    else if (base == 2) {
        b = new B;
        return (b);
    }
    else if (base == 3) {
        b = new C;
        return (b);
    }
    return nullptr;
}

void                identify_from_pointer(Base *p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

void                identify_from_reference(Base & p) {
    try {
        static_cast<void>(dynamic_cast<A&>(p));
    } catch(std::bad_cast &b) {
        std::cout << "FAILED CONVERTION: " << b.what() << std::endl;
    }
    try {
        static_cast<void>(dynamic_cast<B&>(p));
    } catch(std::bad_cast &b) {
        std::cout << "FAILED CONVERTION: " << b.what() << std::endl;
    }
    try {
        static_cast<void>(dynamic_cast<C&>(p));
    } catch(std::bad_cast &b) {
        std::cout << "FAILED CONVERTION: " << b.what() << std::endl;
    }
}

int                 main() {
    srand(time(0));
    Base *hello = generate();
    Base &hello1 = *hello;

    identify_from_pointer(hello);
    identify_from_reference(hello1);
    delete hello;
    return 0;
}
#include <iostream>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

void gen_random(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    s[len] = 0;
}

void * serialize( void ) {
    char *s = new char[20];
    gen_random(s, 8);
    gen_random(&s[12], 8);
    *reinterpret_cast<int *>(&s[8]) = rand() % 2147483647;
    return (reinterpret_cast<void *>(s));
}

Data * deserialize( void * raw ) {
    char *s = reinterpret_cast<char *>(raw);
    Data *d = new Data;

    d->n = *reinterpret_cast<int *>(&s[12]);
    d->s1.assign(s, 8);
    d->s2.assign(&s[12], 8);
    return (d);
}

int         main()
{
    srand(time(NULL));
    void *s = serialize();
    Data *d = deserialize(s);

    std::cout << d->n << std::endl;
    std::cout << d->s1 << std::endl;
    std::cout << d->s2 << std::endl;

    serialize();
}
#include <iostream>
#include <cmath>

inline int divisorsCount(int n) {
    int ctr = 0;
    for (int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                ctr++;
            } else {
                ctr += 2;
            }
        }
    }
    return ctr;
}

int a() {
    int n = 210;
    while (divisorsCount(n) < 210) {
        n++;
    }

    return n;
}

int b() {
    int n = 210;
    while (divisorsCount(n) != 210) {
        n++;
    }

    return n;
}

int main() {
    std::cout << "a) " << a() << std::endl;
    std::cout << "b) " << b() << std::endl;
    return 0;
}

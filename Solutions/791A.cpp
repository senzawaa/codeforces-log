#include<iostream>
int main() {
    int a, b, t;
    t = 0;
    std::cin >> a >> b;
    do {
        a *= 3;
        b *= 2;
        t++;
    } while (a <= b);
    std::cout << t;
}
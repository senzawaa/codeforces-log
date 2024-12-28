#include<iostream>
int main() {
    int s;
    std::cin >> s;
    std::cout << (s/5) + ((s%5) != 0);
}
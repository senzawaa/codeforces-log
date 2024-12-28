#include<iostream>
int main() {
    int32_t w;
    std::cin >> w;
    if (w % 2 == 0 && w > 2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
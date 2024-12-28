#include<iostream>
// #include<string>
int main() {
    int32_t n;
    std::cin >> n;
    int32_t x = 0;
    for (int32_t i = 0; i < n; i++) {
        char str[4];
        std::cin >> str;
        if (str[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    std::cout << x << std::endl;
    return 0;
}
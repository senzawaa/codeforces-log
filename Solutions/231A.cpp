#include<iostream>
// #include<string>
int main() {
    int32_t n, sum;
    std::cin >> n;
    sum = 0;
    for (int32_t idx = 0; idx < n; idx++) {
        int32_t a, b, c;
        std::cin >> a >> b >> c;
        if (a + b + c >= 2) {
            sum++;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
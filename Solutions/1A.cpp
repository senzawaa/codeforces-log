#include<iostream>
// #include<unordered_map>
int32_t main() {
    int n, m, a;
    std::cin >> n >> m >> a;
    int64_t x = n / a + (n % a != 0);
    int64_t y = m / a + (m % a != 0);
    // ceil
    std::cout << x * y << std::endl;
}
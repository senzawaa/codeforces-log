#include<iostream>
#include<vector>
// #include<string>
int main() {
    int32_t n, k;
    std::cin >> n >> k;
    std::vector<int32_t> v(n);
    for (int32_t i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    int32_t pass = 0;
    for (int32_t i = 0; i < n; i++) {
        if (v[i] == 0) {
            break;
        }
        if (i < k) {
            pass++;
        } else if (v[i] == v[k - 1]) {
            pass++;
        }
    }
    std::cout << pass << std::endl;
}
#include<iostream>
#include<string>
int32_t main() {
    std::string A, B;
    std::cin >> A >> B;
    int32_t sum = 0;
    // capitalize
    for (int i = 0; i < A.size(); i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            A[i] += 32;
        }
        if (B[i] >= 'A' && B[i] <= 'Z') {
            B[i] += 32;
        }
    }
    if (A == B) {
        std::cout << 0 << std::endl;
    } else {
        for (int i = 0; i < A.size(); i++) {
            if (A[i] < B[i]) {
                std::cout << -1 << std::endl;
                return 0;
            } else if (A[i] > B[i]) {
                std::cout << 1 << std::endl;
                return 0;
            }
        }
    }
}
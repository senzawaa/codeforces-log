#include<iostream>
#include<string>
#include<algorithm>
int main() {
    long long  n;
    std::cin >> n;
    std::cout << n / 2 + (n%2 * -n);
}
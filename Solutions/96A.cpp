#include<iostream>
#include<string>
#include<algorithm>
int main() {
    std::string bin;
    std::cin >> bin;
    if (bin.find("1111111") != std::string::npos || bin.find("0000000") != std::string::npos) std::cout << "YES";
    else std::cout << "NO";
}
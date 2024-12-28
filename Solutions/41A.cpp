#include<iostream>
#include<string>
#include<algorithm>
int main() {
    std::string s, t;
    std::cin >> s >> t;
    std::reverse(t.begin(), t.end());
    if (s != t) {
        std::cout << "NO";
        return 0;
    }
    std::cout << "YES";
}
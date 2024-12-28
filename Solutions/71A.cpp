#include<iostream>
#include<string>
std::string shorten(std::string str) {
    std::string result;
    result += str[0];
    result += std::to_string(str.length() - 2);
    result += str[str.length() - 1];
    return result;
}
int main() {
    int n;
    std::cin >> n;
    for (int idx = 0; idx < n; idx++) {
        std::string str;
        std::cin >> str;
        if (str.length() > 10) {
            std::cout << shorten(str) << std::endl;
        } else {
            std::cout << str << std::endl;
        }
    }
    return 0;
}
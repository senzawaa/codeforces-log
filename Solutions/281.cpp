#include<iostream>
#include<string>
int32_t main() {
    std::string input;
    std::getline(std::cin, input);
    bool capitalize = true;
    for (int idx = 0; idx < input.length(); idx++) {
        if (capitalize) {
            input[idx] = (input[idx] >= 'a' && input[idx] <= 'z') ? (input[idx] - ('a'-'A')) : input[idx];
            capitalize = false;
        }
        else if (input[idx] == ' ') capitalize = true;
    }
    std::cout << input << std::endl;
}
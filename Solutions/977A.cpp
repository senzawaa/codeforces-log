#include<iostream>
#include<string>
int main() {
    std::string n;
    int k;
    std::cin >> n >> k;
    for (int idx = 0; idx < k; idx++) {
        if (n[n.length() - 1] == '0'){
            n.pop_back();
            continue;
        }
        n[n.length() - 1] = n[n.length() - 1] - 1;
    }
    std::cout << n;
}
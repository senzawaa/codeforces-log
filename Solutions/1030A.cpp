#include<iostream>
#include<string>
#include<algorithm>
 
int main() {
    int n;
    std::cin >> n;
    int bin;
    for (int idx = 0; idx < n; idx++) {
        std::cin >> bin;
        if (bin == 1) {
            std::cout << "HARD";
            return 0;
        }
    }
    std::cout << "EASY";
}
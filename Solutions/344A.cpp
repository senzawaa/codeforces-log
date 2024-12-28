#include<iostream>
#include<string>
#include<algorithm>
 
int main() {
    int n, group = 1;
    std::cin >> n;
    char pole[3], prev;
    for (int idx = 0; idx < n; idx++) {
        std::cin >> pole;
        // std::cout << pole;
        if (pole[0] == prev) {
            // std::cout << idx<< std::endl;
            group++;}
        prev = pole[1];
    }
    std::cout << group;
}
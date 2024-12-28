#include<iostream>
#include<string>
#include<algorithm>
bool checkDistinct(int n) {
    bool used[10] = {false};
    while (n > 0) {
        int digit = n % 10;
        if (used[digit]) return false;
        used[digit] = true;
        n /= 10;
    }
    return true;
}
int main() {
    int year;
    std::cin >> year;
    // year++;
    do {
        year++;
    } while (!checkDistinct(year));
    std::cout << year << std::endl;
}
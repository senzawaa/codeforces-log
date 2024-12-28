#include<iostream>
int main() {
    int n;
    std::cin >> n;
    int xSum = 0, ySum = 0, zSum = 0;
    for (int idx = 0; idx < n; idx ++) {
        int x, y, z;
        std::cin >> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;
    }
    std::cout << ((xSum == 0 && ySum == 0 && zSum == 0) ? "YES" : "NO");
}
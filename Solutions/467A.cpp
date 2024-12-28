#include<iostream>
#include<string>
#include<algorithm>
 
int main() {
    int n;
    std::cin >> n;
    int curr, cap, cnt = 0;
    for (int idx = 0; idx < n; idx++) {
        std::cin >> curr >> cap;
        if (cap - curr >= 2) cnt++;
    }
    std::cout << cnt;
}
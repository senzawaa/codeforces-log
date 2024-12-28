#include<iostream>
// #include<string>
#include<algorithm>
int main() {
    int n;
    std::cin >> n;
    char w;
    int score = 0;
    for (int idx = 0; idx < n; idx++) {
        std::cin >> w;
        switch (w) {
            case 'D':
                score++;
                break;
            case 'A':
                score--;
                break;
        }
    }
    if (score > 0) std::cout << "Danik";
    else if (score < 0) std::cout << "Anton";
    else std::cout << "Friendship";
}
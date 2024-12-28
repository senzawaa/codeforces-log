#include<iostream>
#include<string>
#include<algorithm>
int main() {
    long long n;
    std::cin >> n;
    int count = 0;
    do {
        // std::cout << (char)(n%10 + '0') << std::endl;
        switch((char)(n%10 + '0')) {
            case '4':
            case '7':
                count++;
                break;
            default:
                break;
        }
        n = n / 10;
    } while(n != 0);
    // std::cout << count << std::endl;
    do {
        switch((char)(count%10 + '0')) {
            case '4':
            case '7':
                break;
            default: {
                std::cout << "NO";
                return 0;
            }
        }
        count = count / 10;
    } while(count != 0);
    std::cout << "YES";
}
#include<iostream>
using namespace std;
int main() {
    int n;
    int bills=0;
    cin >> n;
    for (auto bill : {100, 20, 10, 5, 1}) {
        bills += n / bill;
        n = n % bill;
    }
    cout << bills;
}
#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        sum += ((k + tmp) <= 5);
    }
    cout << sum / 3;
}
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int curr = 1;
    int i=0;
    while (n >= curr) {
        n -= curr;
        ++i;
        curr += i+1;
    }
    cout << i;
}
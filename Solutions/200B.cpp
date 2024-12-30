#include<iostream>
using namespace std;
int main() {
    // simple division??
    int n;
    cin >> n;
    int p;
    float sum;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += p;
    }
    cout << sum / n;
}
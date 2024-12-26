#include<iostream>
#include<string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    for (int pos = 0; pos < A.length(); pos++) {
        // if ((A[pos] - '0' + B[pos] - '0') == 1) {
        //     cout << '1';
        // } else cout << '0';
        cout << (A[pos] - '0' + B[pos] - '0') % 2;
    }
}
#include<iostream>
using namespace std;
int main() {
    int n, curr = 0, c=0;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        curr += t;
        if (t == -1 && curr < 0) {
            c++;
            curr = 0;
        }
    }
    cout << c;
}
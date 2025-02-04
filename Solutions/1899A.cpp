#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 3 == 0) {
            cout << "Second\n";
        } else 
            cout << "First\n";
    }
}
#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char c;
        int a=0, b=0;
        for (int i = 0; i < 5; i++) {
            cin >> c;
            switch (c) {
                case 'A':
                    a++;
                    break;
                case 'B':
                    b++;
                    break;
            }
        }
        if (a > b) {
            cout << 'A' << '\n';
        } else {
            cout << 'B' << '\n';
        }
    }
}
#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int c[2]={0,0};
        int n;
        cin >> n;
        char d;
        bool ok = 0;
        for (int i = 0; i < n; i++) {
            cin >> d;
            switch (d) {
                case 'U':
                    c[1]++;
                    break;
                case 'D':
                    c[1]--;
                    break;
                case 'L':
                    c[0]--;
                    break;
                case 'R':
                    c[0]++;
                    break;
            }
            if (c[0] == 1 && c[1] == 1 && !ok) {
                cout << "YES\n";
                ok = 1;
            }
        }
        if (!ok) 
            cout << "NO\n";
    }
}
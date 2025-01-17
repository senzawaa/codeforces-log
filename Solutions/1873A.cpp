#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char abc[4];
        for (int i = 0; i < 3; i++)
            cin >> abc[i];
        if (strcmp(abc, "abc") == 0) {
            cout << "YES\n";
            continue;
        }
        bool dn = false;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i != j || dn) {
                    swap(abc[i], abc[j]);
                    if (strcmp(abc, "abc") == 0 && !dn) {
                        cout << "YES\n";
                        dn = 1;
                    }
                    swap(abc[i], abc[j]);
                }
            }
        }
        if (!dn)
            cout << "NO\n";
    }
}
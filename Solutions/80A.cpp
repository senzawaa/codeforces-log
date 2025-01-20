#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n+1; i <= m; i++) {
        bool prm = true;
        for (int j = 2; (j*j) <= i; j++) {
            if (i % j == 0) {
                prm=0;
            }
        } 
        if (prm && i != m) {
            cout << "NO";
            return 0;
        } else if (i == m && !prm) {
            cout << "NO";
            return 0;
        }
    }   
    cout << "YES";
}
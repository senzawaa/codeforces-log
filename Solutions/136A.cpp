#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p, i[n];
    for (int idx = 0; idx < n; idx++) {
        cin >> p;
        i[p - 1] = idx + 1;
    }
    for (int idx = 0; idx < n; idx++) {
        cout << i[idx];
        if (idx != n) cout << ' ';
    }
}
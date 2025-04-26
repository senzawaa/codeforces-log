#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 0;
    int p[n];
    for (; i < n; i++) {
        cin >> p[i];
    }
    int r=0;
    for (i=0;i<n;i++) {
        int ptr=p[i];
        int c = 1;
        while (ptr != -1) {
            ptr=p[ptr-1];
            c++;
        }
        r = max(r, c);
    }
    cout << r;
}
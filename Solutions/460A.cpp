#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int i=0;
    while (n != 0 && ++i) {
        if (i%m == 0)
            n++;
        n--;
    }
    cout << i << '\n';
}
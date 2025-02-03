#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        cout << pow(max(2*a, b), 2) << '\n';
    }
}
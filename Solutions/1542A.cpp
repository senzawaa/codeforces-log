#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2*n];
        int ooe[2]={0,0};
        for (int i = 0; i < 2*n; i++) {
            cin >> a[i];
            ooe[a[i]%2]++;
        }
        cout << ((ooe[0]==ooe[1]) ? "Yes\n" : "No\n");
    }
}
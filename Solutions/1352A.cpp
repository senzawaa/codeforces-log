#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string res = "";
        int n, d, c=0, ctr=0;
        cin >> n;
        while (n != 0) {
            d = n % 10;
            if ( d != 0 ) {
                res += to_string((int)(d * (pow(10, c)))) + ' ';
                ctr++;
            }
            n /= 10;
            c++;
        }
        cout << ctr << '\n' << res << endl;
    }
}
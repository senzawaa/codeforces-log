#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> out;
        int i=0;
        while (n != 0) {
            if (n % 10 != 0)
                out.push_back(n%10* pow(10, i));
            n /= 10;
            ++i;
        }
        cout << out.size() << '\n';
        for (auto nm : out)
            cout << nm << ' ';
        cout << '\n';
    }
}
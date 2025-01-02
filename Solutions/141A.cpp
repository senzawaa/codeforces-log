#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    vector<int> counter(26, 0);
    int i = 0;
    for ( auto s : {a, b, c} ) {
        i++;
        for ( char cc : s ) {
            if (i == 3) counter[cc - 'A']--;
            else counter[cc - 'A']++;
        }
    }
    for ( int n : counter ) {
        if (n != 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
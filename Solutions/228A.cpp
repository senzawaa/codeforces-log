#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    unordered_map<int, int> m;
    int p;
    for (int i = 0; i < 4; i++) {
        cin >> p;
        m[p]++;
    }
    cout << 4 - m.size();
}
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, int> map;
    while (n--) {
        string u;
        cin >> u;
        if (map.find(u) == map.end()) {
            map[u] = 1;
            cout << "OK" << endl;
        } else {
            map[u];
            cout << u << map[u]++ << endl;
        }
    }
}
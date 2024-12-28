#include<iostream>
// #include<unordered_map>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    int n;
    cin >> n;
    // char word[n];
    char letter;
    vector<int> check(26, 0);
    int tolower = 'a' - 'A';
    for (int i = 0; i < n; i++) {
        cin >> letter;
        if ('A' <= letter && 'Z' >= letter) letter += tolower;
        check[letter - 'a'] = 1;
    }
    cout << ((accumulate(check.begin(), check.end(), 0) == 26) ? "YES" : "NO");
}
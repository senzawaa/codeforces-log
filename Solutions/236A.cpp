// submitted this by Python using Counter, therefore its rewritten.
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

int main() {
    vector<int> characters(26, 0);
    string uname;
    cin >> uname;
    for ( char c : uname ) {
        characters[c - 'a'] = 1;
    }
    cout << ((accumulate(characters.begin(), characters.end(), 0) % 2) ? "IGNORE HIM!" : "CHAT WITH HER!");
    // n % 2
    // odd true, even false
}
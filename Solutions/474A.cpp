#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<char>> key;
int main() {
    // for (string s : {"qwertyuiop","asdfghjkl;","zxcvbnm,./"}) {
    //     key.push_back({});
    //     for (char c : s) {
    //         key.back().push_back(c);
    //     }
    // }
    char shift;
    cin >> shift;
    int dir = (shift == 'L') ? 1 : -1;
    string s;
    cin >> s;
    // string d="";
    for (char c : s) {
        for (string ss : {"qwertyuiop","asdfghjkl;","zxcvbnm,./"}) {
            auto f = find(ss.begin(), ss.end(), c);
            if (f != ss.end()) {
                cout << *(f+dir);
            }
        }
    }
}
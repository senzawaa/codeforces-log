#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int nC[3] = {0, 0, 0}; // numberCounts
    for (auto c : s) {
        switch (c) {
            case '+':
                break;
            default:
                nC[c-'1']++;
        }
    }
    string result;
    for (int idx = 0; idx < 3; idx++) {
        for (int n = 0; n < nC[idx]; n++) {
            result += (char)(idx + '1');
            result += '+';
        }
    }
    result.pop_back();
    cout << result;
}
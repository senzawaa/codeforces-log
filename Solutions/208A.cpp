#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if (n <3) {
        cout << s;
        return 0;
    }
    string result = "";
    for (int idx = 0; idx < n; idx++) {
        if (idx < n - 2 && s.substr(idx, 3) == "WUB") {
            idx += 2;
            if (result != "" && result.back() != ' ') result += ' ';
        } else {
            result += s[idx];
        }
    }
    if (result != "" && result.back() == ' ') result.pop_back();
    cout << result;
}
#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int unused;
        cin >> unused;
        string s;
        cin >> s;
        int score = 0;
        for (char c : s) {
            switch(c) {
                case '(':
                    score++;
                    break;
                case ')':
                    if (score != 0) {
                        score--;
                    }
                    break;
            }
        }
        cout << score << '\n';
    }
}
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mx = -1, mn = 1e5 + 1, am = 0;
    int i = 0;
    while (n--) {
        int score;
        cin >> score;
        if (i == 0) {mn = score; mx = score;}
        else {
            if (mn > score) {
                am++;
                mn = score;
            } else if (mx < score) {
                am++;
                mx = score;
            }
        }
        i++;
    }
    cout << am;
}
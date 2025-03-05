#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt[2]={0,0};
    for (char c : s) {
        cnt[c - '0']++;
    }
    if (cnt[1] > cnt[0]) swap(cnt[0], cnt[1]);
    cout << (cnt[0] - cnt[1]); 
}
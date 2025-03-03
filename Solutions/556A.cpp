#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    do {
        auto f1 = s.find("01");
        auto f2 = s.find("10");
        if (f1 == string::npos && f2 == string::npos) break;
        if (f1 == string::npos) f1 = f2;
        s = s.substr(0, f1) + s.substr(f1+2, s.length()-f1-2);
    } while(true);
    cout << s.length();
}
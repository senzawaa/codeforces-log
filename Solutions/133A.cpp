#include<iostream>
#include<string>
using namespace std;
int main() {
    // + is internal, ignore
    string in;
    cin >> in;
    for (char c: in) {
        switch (c) {
            case 'H':
            case 'Q':
            case '9':
                cout << "YES";
                return 0;
            default:
                break;
        }
    }
    cout << "NO";
}
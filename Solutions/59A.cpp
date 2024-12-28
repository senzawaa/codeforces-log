#include<iostream>
#include<string>
using namespace std;
int main() {
    string w;
    cin >> w;
    int upper = 0, lower = 0;
    for (char c : w) {
        if ('a' <= c && c <= 'z') lower++;
        else if ('A' <= c && c <= 'Z') upper++;
    }
    for (char &c : w) {
        if (upper > lower) c = toupper(c);
        else c = tolower(c);
    }
    cout << w << endl;
    return 0;
}
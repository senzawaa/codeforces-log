#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int s=0;
    while (n--) {
        int m, c;
        cin >> m >> c;
        s+=(m > c ? 1 : (m < c ? -1 : 0));
    }
    cout << (s > 0 ? "Mishka" : (s < 0 ? "Chris" : "Friendship is magic!^^"));
}
#include<iostream>
#include<string>
using namespace std;
int main() {
    int y, w;
    cin >> y >> w;
    int n = max(y, w);
    string map[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << map[n-1];
}
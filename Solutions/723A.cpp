#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int co[3];
    cin >> co[0] >> co[1] >> co[2];
    sort(co, co + 3);
    cout << co[2] - co[1] + abs(co[0] - co[1]);
}
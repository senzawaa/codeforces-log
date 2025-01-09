#include<iostream>
using namespace std;
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << min(min((n/m)*b+(n%m)*a, n*a), (n/m + (n%m!=0))*b);
}
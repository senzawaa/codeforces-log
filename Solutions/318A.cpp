#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    bool odd = true;
    if (k > (n/2 + n % 2)) {
        k = k - (n/2 + n % 2);
        odd = false;
    }
    cout << k * 2 - odd;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    l *= k;
    cout << min(min(l/nl, c*d), p/np) / n;
}

#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

int n;
// vector<int> dp()
int dfs(int a[], vector<int> blacklist, int pos=0) {
    if (pos >= n) return 0;
    if (find(blacklist.begin(), blacklist.end(), a[pos]) != blacklist.end()) {
        return dfs(a, blacklist, pos+1);
    }
    
}
int main() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
}
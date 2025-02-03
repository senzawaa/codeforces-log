#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#define map unordered_map
using namespace std;
pair<int, int> add(pair<int, int> t, int x) {
    t.second += x;
    while(t.second >= 60){
        t.second -= 60;
        t.first++;
    }
    t.first %= 24;
    return t;
}

bool isPalindrome(pair<int,int> tm) {
    char buf[6];
    sprintf(buf, "%02d:%02d", tm.first, tm.second);
    return buf[0] == buf[4] && buf[1] == buf[3];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        int x; 
        cin >> x;
        pair<int,int> tm = {stoi(s.substr(0,2)), stoi(s.substr(3,2))};
        pair<int,int> start = tm;
        int ans = 0;
        do {
            if(isPalindrome(tm)) ans++;
            tm = add(tm, x);
        } while (tm != start);
        cout << ans << "\n";
    }
    return 0;
}
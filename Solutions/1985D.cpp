#include <iostream>
#include <unordered_map>
#include <string>
#define map unordered_map
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> rc;
        char c;
        int mx = 0;
        string gr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> gr[i];
            for (char c : gr[i])
            {
                if (c == '#')
                    rc[i]++;
            }
            mx = max(mx, rc[i]);
        }
        for (auto it = rc.begin(); it != rc.end(); it++)
        {
            if (it->second == mx) {
                cout << (it->first+1) << ' ' << (gr[it->first].find((const char*)("#"))+(mx/2)+1) << '\n';
            }
        }
    }
}
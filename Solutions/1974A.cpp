#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int boxes = 5 * 3;
        int rep = 0;
        while (x > 0 || y > 0) {
            if (y > 0) {
                boxes -= min(y, 2) * 4;
                y -= min(y, 2);
            }
            int tmp = x;
            x -= min(x, boxes);
            boxes -= min(tmp, boxes);
            boxes = 5 * 3;
            rep++;
        }
        cout << rep << '\n';
    }
}
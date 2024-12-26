#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int nums[3];
    // cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) cin >> nums[i];
    int MAX = -1;
    MAX = max(MAX, nums[0] + nums[1] + nums[2]);
    MAX = max(MAX, nums[0] * nums[1] * nums[2]);
    // (a+b)*c, a+b*c
    // (b+c)*a, b+c*a
    for (int idx = 0; idx < 2; idx++) {
        MAX = max(MAX, (nums[idx] + nums[(idx+1)%3]) * nums[(idx+2)%3]);
        MAX = max(MAX, nums[idx] + nums[(idx+1)%3] * nums[(idx+2)%3]);
    }
    // MAX = max(MAX, nums[0])
    cout << MAX;
}
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    string letters;
    getline(cin, letters);
    vector<int> counter(26, 0);
    for (char c : letters) {
        if ('a' <= c && c <= 'z')
            counter[c - 'a'] = 1;
    }
    cout << accumulate(counter.begin(), counter.end(), 0);
}

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
unordered_map<string, int> shapes = {
    {"Tetrahedron",4},
    {"Cube",6},
    {"Octahedron",8},
    {"Dodecahedron",12},
    {"Icosahedron",20}
};
int main() {
    int n, total = 0;
    string input;
    cin >> n;
    for (int idx = 0; idx < n; idx++) {
        cin >> input;
        total += shapes[input];
    }
    cout << total;
}
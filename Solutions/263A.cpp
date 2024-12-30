#include<iostream>
using namespace std;
int main() {
    int mat[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[j][i];
            if (mat[j][i] == 1) {
                cout << abs(j - 2) + abs(i - 2);
            }
        }
    }
}
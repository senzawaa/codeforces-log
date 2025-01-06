#include<iostream>
using namespace std;
int main() {
    int ab, ac, bc, abc;
    cin >> ab >> ac >> bc >> abc;
    for (int *n : (int*[]){&ab, &ac, &bc}) {
        if (*n > abc) {
            swap(*n, abc);
        }
    }
    for (int n : {ab, ac, bc}) {
        cout << abc - n << ' ';
    }
}
#include<iostream>
#include<array>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        // int mv=0;
        // while (a+b+c != 0) {
        //     auto adr = {&a,&b};
        //     for (auto &d : adr) {
        //         if (*d==0) {
        //             if (c==0) break;
        //             c--;
        //             continue;
        //         }
        //         (*d)--;
        //         mv ^= 1;
        //     }
        // }
        // cout << mv << '\n';
        cout << ((a+(c&1)>b)?"First\n":"Second\n");
    }
}
#include<iostream>
#include<string>
using namespace std;
int main() {
    string in;
    cin >> in;
    string out="";
    for (int i=0;i<in.length();i++) {
        switch(in[i]) {
            case '.':
                out += '0';
                break;
            case '-': {
                switch(in[++i]) {
                    case '.':
                        out += '1';
                        break;
                    case '-':
                        out += '2';
                        break;
                }
            }
        }
    }
    cout << out;
}
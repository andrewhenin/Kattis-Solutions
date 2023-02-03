#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    if (input < 149) {
        cout << 99 << "\n";
        return 0;
    } else if (input >= 9949) {
        cout << 9999 << "\n";
    } else {
        int div = input / 100;
        int rem = input % 100;
        if (rem < 49) {
            cout << div*100 - 1 << "\n";
        } else {
            cout << div * 100 + 99 << '\n';
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << ":\n";
    for (int i = 2; i < n/2 + 2; i++) {
        int remainder = n%(2*i-1);
        if (remainder == 0 || remainder - i == 0) {
            cout << i << "," << i-1 << "\n";
        }
        remainder = n%i;
        if (remainder == 0) {
            cout << i << "," << i << "\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t < 0) {
            total += 1;
        } 
    }
    cout << total << "\n";
    return 0;
}
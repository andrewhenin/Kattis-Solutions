#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string temp;
    cin >> n;
    for (int i = 0; i < n; i+=2) {
        cin >> temp;
        cout << temp << "\n";
        cin >> temp;
    }
    return 0;
}
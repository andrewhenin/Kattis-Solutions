#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string input; cin >> input;
    string a = input.substr(0, 6);
    string b = input.substr(7, 4);
    vector<char> v1(a.begin(), a.end());
    vector<char> v2(b.begin(), b.end());
    v1.insert(v1.end(), v2.begin(), v2.end());
    vector<int> v;
    for (int i = 0; i < v1.size(); i++) {
        v.push_back(v1[i] - '0');
    }
    if ((v[0]*4 + v[1]*3 + v[2]*2 + v[3]*7 + v[4]*6 + v[5]*5 + v[6]*4 + v[7]*3 + v[8]*2 + v[9]) % 11 == 0) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}
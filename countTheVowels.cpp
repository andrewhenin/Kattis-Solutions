#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int counter = 0;
    string input;
    getline(cin, input);
    string vowelStr = "AEIOUaeiou";
    vector<char> vowels(vowelStr.begin(), vowelStr.end());
    for (auto &ch : input) {
        if (find(vowels.begin(), vowels.end(), ch) != vowels.end()) {
            counter += 1;
        }
    }
    cout << counter << '\n';
    return 0;
}
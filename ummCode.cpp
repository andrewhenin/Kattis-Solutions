#include <bits/stdc++.h>

using namespace std;

int main() {
    string speech, generatedBinary = "";
    while (cin >> speech) {
        string tempBinary = "";
        bool valid = true;
        for (int i = 0; i < speech.length(); i++) {
            if (speech[i] != 'u' && speech[i] != 'm' && !ispunct(speech[i])) {
                valid = false;
            } else if (speech[i] == 'u') {
                tempBinary += '1';
            } else if (speech[i] == 'm') {
                tempBinary += '0';
            }
        }
        if (valid) {
            generatedBinary += tempBinary;
        }
        tempBinary = "";
    }
    for (int i = 0; i < generatedBinary.length(); i+=7) {
        cout << char(stoi(generatedBinary.substr(i, 7), nullptr, 2));
    }
    
    return 0;
}
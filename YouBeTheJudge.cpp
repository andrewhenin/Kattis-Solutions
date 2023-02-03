#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <cstdio>
using namespace std;


bool isPrime(long long n) { //this function works fine
    if (n == 0 || n == 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

    /*
    check if it's three output tokens separated by white space.
    check that the first is positive and even > 3 and < 10^9
    check if the second and third numbers are prime and sum up to the first number
    check if there are signs or leading zeros
    */ 

int main () {

    string a[4];

    if (cin >> a[0] && cin >> a[1] && cin >> a[2]) {
        for (int i = 0; i < 3; i++) {   
            for (int j = 0; j < a[i].size(); j++) {
                if (!isdigit(a[i][j])) {
                    cout << "0" << "\n";
                    return 0;
                }
            }
        }
    } else {
        cout << "0" << "\n";
        return 0;
    }

    if (cin >> a[3]) {
        cout << "0" << "\n";
        return 0;
    }

    if (a[0].length() > 10 || a[1].length() > 10 || a[2].length() > 10) {
        cout << "0" << '\n';
        return 0;
    }
 
    for (int i = 0; i < 3; i++) {
        if (a[i][0] == '0') {
            cout << "0" << "\n";
        return 0;
        }
    }

    long long b[3];
    b[0] = stoll(a[0]);
    
    if (b[0]%2 != 0 || b[0] <= 3 || b[0] > pow(10, 9)) {
        cout << "0" << "\n";
        return 0;
    }
    
    b[1] = stoll(a[1]);
    b[2] = stoll(a[2]);

    if (!isPrime(b[1]) || !isPrime(b[2])) {
        cout << "0" << "\n";
        return 0;
    }

    if (b[1] + b[2] != b[0]) {
        cout << "0" << "\n";
        return 0;
    }

    cout << "1" << "\n";
    return 0;
}




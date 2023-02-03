#include <bits/stdc++.h>
using namespace std;

vector<char> toBinary(int b) {
    vector<char> binary;
    for (int i = 0; i < 4; i++) {
        if (b%2 == 1) {
            binary.push_back('*');
        } else {
            binary.push_back('.');
        }
        b = b/2;
    }
    return binary;
}

int main() {
    int time;
    cin >> time;

    int hoursUnits, hoursTens, minutesUnits, minutesTens;
    hoursTens = time/1000; // 1
    hoursUnits = (time%1000)/100;// 6
    minutesTens = ((time%1000)%100)/10; // 1
    minutesUnits = (((time%1000)%100)%10); // 5 

    vector<vector<char>> watchHours;
    vector<vector<char>> watchMins;

    watchHours.push_back(toBinary(hoursTens));
    watchHours.push_back(toBinary(hoursUnits));
    watchMins.push_back(toBinary(minutesTens));
    watchMins.push_back(toBinary(minutesUnits));



    for (int i = 3; i >= 0; i--) {
        cout << watchHours[0][i] << " " << watchHours[1][i] << "   " << watchMins[0][i] << " " << watchMins[1][i] << "\n";
        //. *   . .
    }

    return 0;
}
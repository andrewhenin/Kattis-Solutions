
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
  int n, y1, y2, aliens;
  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<int> curr;
    int temp;
    cin >> temp;
    while (temp != 0) {
      curr.push_back(temp);
      cin >> temp;
    }
    aliens = 0;
    for (int j = 1; j < curr.size(); j++) {
      if (curr[j] > curr[j - 1] * 2) {
        aliens += curr[j] - curr[j-1] * 2;
      }
    }
    cout << aliens << "\n";
  }
  return 0;
}
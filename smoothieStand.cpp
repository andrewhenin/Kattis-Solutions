#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int main () {
    int k, r; cin >> k; cin >> r;
    int ingredients[k];
    int recipesAndCost[r][k+1];
    int maxCost = 0;

    if (k <= 0 || r <= 0) {
        cout << 0 << '\n';
        return 0;
    }
    
    for (int i = 0; i < k; i++) {
        cin >> ingredients[i];
    }
    for (int j = 0; j < r; j++) {
        for (int i = 0; i < k+1; i++) {
            cin >> recipesAndCost[j][i];
        }
    }


    for (auto &r : recipesAndCost) {
        int localMin = MAX;
        for (int i = 0; i < k; i++) {
            if (r[i] != 0) {
                if (localMin > ingredients[i] / r[i] ) {
                    localMin = ingredients[i] / r[i];
                }
            }
        }
        if (maxCost < localMin * r[k]) {
            maxCost = localMin * r[k];
        }
    }
    cout << maxCost << '\n';

    return 0;
}
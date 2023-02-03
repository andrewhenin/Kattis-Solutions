#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, h, k; cin >> l; cin >> h; cin >> k;
    char lid[h][l];
    int stickers[k][4];

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> stickers[i][j];
        }
    }

    for (int j = 0; j < h; j++) {
        for (int i = 0; i < l; i++) {
            lid[i][j] = '_';
        }
    }

    int i = 0;
    for (auto &sticker : stickers) {
        cout << "sticker " << char(97+i) << '\n';
        for (int p = sticker[3]; p < (sticker[3] + sticker[1]); p++) {
            if (p < l) {
                for (int c = sticker[2]; c < (sticker[0] + sticker[2]); c++) {
                    if (c < h) {
                        cout << char(97+i) << '\n';
                        lid[c][p] = char(97+i);
                    } 
                }
            }
        }
        i++;
    }

    for (int j = 0; j < h; j++) {
        for (int i = 0; i < l; i++) {
            cout << lid[i][j];
        }
        cout << '\n';
    }

    return 0;
}
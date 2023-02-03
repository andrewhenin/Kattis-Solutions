#include <bits/stdc++.h>

using namespace std;

/*******************************************************/
// rotate left function: tested
void rotateLeft(int game[4][4]) {
  int newGame[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      newGame[i][j] = game[i][j];
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      game[i][j] = newGame[j][3 - i];
    }
  }
}

// rotate right function: tested
void rotateRight(int game[4][4]) {
  int newGame[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      newGame[i][j] = game[i][j];
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      game[i][j] = newGame[3 - j][i];
    }
  }
}

/*********************************************************/
// main function that runs the game
void runGame(int game[4][4]) {
  for (int j = 0; j < 4; j++) {
    int location = -1, counter = 0;
    for (int i = 0; i < 4; i++) {
      if (game[i][j] == 0) {
        counter++;
        if (counter == 1) {
            location = i;
        }
      } else if (game[i][j] != 0 && location != -1) {
        game[location][j] = game[i][j];
        game[i][j] = 0;
        location = i;
        counter = 0;
      }
    }
    for (int i = 0; i<3; i++) {
        if (game[i][j] == game[i+1][j] && game[i][j] != 0) {
            game[i][j] = game[i][j] * 2;
            for (int k = i + 1; k < 3; k++) {
                game[k][j] = game[k+1][j];
            }
            game[3][j] = 0;

        }
    }
  }
}


  // for (int j = 0; j < 4; j++) {
  //   int i = 3;
  //   while (i > 0) {
  //     if (game[i - 1][j] == 0) {
  //       game[i - 1][j] = game[i][j];
  //       game[i][j] = 0;
  //     } else if (game[i - 1][j] == game[i][j]) {
  //       game[i - 1][j] = 2 * game[i][j];
  //       game[i][j] = 0;
  //       int k = 3;
  //       while (k > 0) {
  //         if (game[k - 1][j] == 0) {
  //           game[k - 1][j] = game[k][j];
  //           game[k][j] = 0;
  //         }
  //         k--;
  //       }
  //     }
  //     i--;
  //   }
  // }


// void runGame(int game[4][4]) {
//   for (int i = 1; i < 4; i++) {
//     for (int j = 0; j < 4; j++) {
//       if (game[i - 1][j] == 0) {
//         game[i - 1][j] = game[i][j];
//         game[i][j] = 0;
//       } else if (game[i][j] == game[i - 1][j]) {
//         game[i - 1][j] = 2 * game[i][j];
//         game[i][j] = 0;
//       }
//     }
//   }
// }

/*********************************************************/
// main
int main() {
  int game[4][4];
  int move;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> game[i][j];
    }
  }
  cin >> move;

  if (move == 0) {
    rotateRight(game);
    runGame(game);
    rotateLeft(game);
  } else if (move == 1) {
    runGame(game);
  } else if (move == 2) {
    rotateLeft(game);
    runGame(game);
    rotateRight(game);
  } else if (move == 3) {
    rotateLeft(game);
    rotateLeft(game);
    runGame(game);
    rotateLeft(game);
    rotateLeft(game);
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << game[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}

/*
2 0 0 2
4 16 8 2
2 64 32 4
1024 1024 64 0

*/
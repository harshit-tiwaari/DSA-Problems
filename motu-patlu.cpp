#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int patlu = 0, motu = 0;
  int i = 1;
  while (true) {
    patlu += i;
    if (patlu >= N) {
      cout << "Patlu";
      break;
    }
    motu += i * 2;
    if (motu >= N) {
      cout << "Motu";
      break;
    }
    i++;
  }
  return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of bricks: ";
//     cin >> n;
    
//     int patlu_bricks = 0, motu_bricks = 0, i;
//     for (i = 1; i <= n; i++) {
//         patlu_bricks += i;
//         motu_bricks += i * 2;
//         if (patlu_bricks + motu_bricks >= n) {
//             break;
//         }
//     }
    
//     if (i % 2 == 0) {
//         cout << "Motu";
//     } else {
//         cout << "Patlu";
//     }
    
//     cout << " will put the last brick." << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of possible ways to run up the stairs: " << countWays(n) << endl;
    return 0;
}

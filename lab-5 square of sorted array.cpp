#include <iostream>
#include <vector>
using namespace std;

vector<int> sorted_squares(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    int left = 0, right = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (abs(arr[left]) > abs(arr[right])) {
            result[i] = arr[left] * arr[left];
            left++;
        } else {
            result[i] = arr[right] * arr[right];
            right--;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {-4, -2, -1, 0, 3, 5};
    vector<int> result = sorted_squares(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

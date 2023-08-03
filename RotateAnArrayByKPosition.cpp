#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    for (int j = 0; j < k; j++) {
        int temp = arr[0];

        for (int i = 0; i <= n - 2; i++) {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
    }
}

int main() {
    int n, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate (k): ";
    cin >> k;

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

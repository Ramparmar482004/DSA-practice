#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the k places to rotate: ";
    cin >> k;

    // k ko normalize kar lo agar n se bada ho
    k = k % n;
    
    if (k != 0) {
        // 1. Shuru ke k elements ko temp vector me store kar lo
        vector<int> temp(k);
        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        // 2. Baaki ke elements ko aage shift kar do
        for (int i = k; i < n; i++) {
            arr[i - k] = arr[i];
        }

        // 3. Temp elements ko wapas array ke end me daal do
        for (int i = 0; i < k; i++) {
            arr[n - k + i] = temp[i];
        }
    }

    // Output print kar do
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
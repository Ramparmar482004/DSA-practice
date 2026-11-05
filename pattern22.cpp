#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout <<"Enter the number -> ";
    cin >> n;
    
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;
            
            int minDist = min({top, left, bottom, right});

            cout << n - minDist << " ";
        }
        cout << endl;
    }
    
    return 0;
}
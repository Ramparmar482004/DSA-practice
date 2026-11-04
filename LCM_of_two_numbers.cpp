#include <iostream>
using namespace std;

int findLCM(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    long long lcm = (a * b) / findLCM(a, b);
    cout << "LCM of " << a << " and " << b << " is: " << lcm << "\n";
    return 0;
}
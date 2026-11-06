#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string num) {
    for (int i = num.length() - 1; i >= 0; i--) {
        // Agar character odd digit hai
        if ((num[i] - '0') % 2 != 0) {
            return num.substr(0, i + 1);
        }
    }
    return "";
}

int main() {
    string num = "52";
    cout << "Largest Odd Number: " << largestOddNumber(num) << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"Enter string which you want to check -> ";
    cin >> s;
    bool isPalindrome = true;
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "True (Palindrome hai)" << endl;
    } else {
        cout << "False (Palindrome nahi hai)" << endl;
    }
    return 0;
}
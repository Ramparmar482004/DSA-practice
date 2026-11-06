#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;
    
    // ASCII characters ke liye frequency/mapping arrays
    int m1[256] = {0};
    int m2[256] = {0};
    
    for (int i = 0; i < s.length(); i++) {
        if (m1[s[i]] != m2[t[i]]) return false;
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}

int main() {
    string s = "egg", t = "add";
    cout << (isIsomorphic(s, t) ? "True" : "False") << endl;
    return 0;
}
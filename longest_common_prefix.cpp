#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string first = strs[0], last = strs.back();
    string ans = "";
    
    for (int i = 0; i < first.length(); i++) {
        if (first[i] == last[i]) {
            ans += first[i];
        } else {
            break;
        }
    }
    return ans;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
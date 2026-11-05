#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cout<<"Enter any string which you want to reverse -> ";
    cin >> s;
    reverse(s.begin(), s.end());
    
    cout << s << endl;
    
    return 0;
}
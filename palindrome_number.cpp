#include<iostream>
using namespace std;
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int A = x;
        int sum = 0;
        while (x>0){
            int digit = x%10;
            sum = sum*10 + digit;
            x = x/10;
        }
        if(sum == A){
            return true ;
        }
        else{
            return false;
        }
    }
    int main(){
        cout << boolalpha << isPalindrome(147);
    }
    
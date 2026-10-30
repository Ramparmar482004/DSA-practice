#include<iostream>
using namespace std;
     int largestDigit(int n) {
        int count = 0;
        while(n != 0){
            int digit = n%10;
            if (digit>count){
                count=digit;
            }
            n=n/10;
        }
        return count;
    }
    int main(){
        int n;
        cout<<"Enter the number -> ";
        cin>>n;
        cout<<largestDigit(n);
        return 0;
    }
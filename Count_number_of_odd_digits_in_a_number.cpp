# include<iostream>
using namespace std;
    int countOddDigit(int n) {
        if (0<=n && n<=5000){
            int count = 0;
            while (n !=0 ){
                int digit = n%10;
                if (digit % 2 != 0){
                    count =count +1;
                }
                n=n/10;
            }
            return count;
        }
        else {
            return 0;
        }
    }
     int main(){
        int n;
        cout << "enter the odd number -> ";
        cin >>n;
        cout << countOddDigit(n);
        return 0;
     }
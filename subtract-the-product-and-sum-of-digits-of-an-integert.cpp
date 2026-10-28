#include <iostream>
using namespace std;
    int subtractProductAndSum(int n){
        int product = 1;
        int sum = 0;
        while(n>0){
        int digit = n%10;
        sum = sum + digit;
        product = product*digit;
        n=n/10;
        }
        int result = product - sum ; 
        return result;
    }
    int main(){
        int n;
        cout<<"Enter the number -> ";
        cin>>n;
        cout<<subtractProductAndSum(n);
        return 0;
    }

#include <iostream>
using namespace std;
    bool cherck_prime(int n){
        if (n <= 1){
            return false;
        }
        for (int i=2; i<n; i++){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }
    int main(){
        int a;
        cout << "Enter the number ->";
        cin >> a;
        if(cherck_prime(a)){
            cout << "Given number is prime"<<endl;
        }
        else {
            cout << "Given number is Not prime"<<endl;
        }
        return 0;
    }
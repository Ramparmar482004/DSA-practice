#include <iostream>
#include <cmath>
using namespace std;
    int isArmstrong(int n) {
            int Arm = n;
            int org = n;
            int count = 0;
            while(n != 0){
                int digit = n%10;
                count = count + 1;
                n = n/10;
            }
            float sum = 0;
            int total = 0;
            while (Arm!=0){
                int digit = Arm%10;
                sum = pow(digit,count);
                total = total + sum;
                Arm=Arm/10;
            }
            if ( total == org){
                return 1;
            }
            else{
                return 0;
            }
        }
    int main (){
        int n; 
        cout<<"Enter the number -> ";
        cin>>n;
        cout<<isArmstrong (n);
        return 0;
    }
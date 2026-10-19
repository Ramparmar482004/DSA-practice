#include<iostream>
using namespace std;
    void Divisors(int n){
        for(int i=1;i<=n;i++){
            int sum = 0;
            if(n%i==0){
                sum=i;
                cout<< sum;
            }
        }
    }
    int main (){
        int n; 
        cout<<"Enter the number -> ";
        cin>>n;
        Divisors(n);
    }
#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter the length of series -> ";
        cin>>n;
        int f1 = 0;
        int f2 = 1;
        int sum = 1;
        cout<<"0"<<" ";
        for(int i=0; i<n; i++){
            sum = f1+f2;
            f2=f1;
            f1 = sum;
            cout<<sum<<" ";
            return 0;
        }  
    }
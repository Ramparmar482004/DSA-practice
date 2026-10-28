#include<iostream>
using namespace std;
    void isPowerOfTwo(int n) {
        if(n>0 && (n&(n-1))==0){
            cout<<"True";
        }
        else{
        cout<<"False";
        }
    }
    int main(){
        int n;
        cout<<"Enter the number -> ";
        cin>>n; 
        isPowerOfTwo(n);
        return 0;
    }
#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter number of ch-> ";
        cin>>n;
        char ch='A';
        char d;
        for (int i=0;i<n;i++){
            for (int j=n-1-i;j<n;j++){
                d=ch+j;
                cout<<d<<" ";
            }
            cout << endl;
        }
        return 0;

    }
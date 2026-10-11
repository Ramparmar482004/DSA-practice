#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter a number N: ";
        cin>>n;
        for(int i=0;i<n;i++){
            char ch ='A';
            for(int j=0;j<i+1;j++){
                cout<<ch<<" ";
                ch=ch+1;
            }
            cout<<endl;
        }
    }    
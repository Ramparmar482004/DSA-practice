#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter the number of ch -> ";
        cin>>n;
        for(int i=0;i<n;i++){
            char ch ='A';
            for(int j=n;j>=i+1;j--){
                cout<<ch;
                ch=ch+1;
            }
            cout<<endl;
        }
        return 0;
    }

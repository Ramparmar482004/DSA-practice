#include<iostream>
using namespace std;
    void pattern5(int n) {
        for(int i=0; i<n;i++){
            for(int j=n;j>=i+1;j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
        int main(){
        int n;
        cout<<"Enter the number -> ";
        cin>>n;
        pattern5(n);
    }

 
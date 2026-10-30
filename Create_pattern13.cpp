#include<iostream>
using namespace std;
    void pattern13(int n) {
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                sum=sum+1;
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }
    int main(){
        int n;
        cout<<"Enter the number -> ";
        cin>>n;
        pattern13(n);
    }
#include<iostream>
using namespace std;
    int main(){
        int sum = 0;
        int n;
        cout<<"Enter the Number -> ";
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                sum=sum+1;
                cout<<sum<<" ";
            }
            cout<<endl;
        }

        return 0;
    }
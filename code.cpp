#include<iostream>
using namespace std;
    int main(){
        int n;
        cout <<"Enter the value of n :";
        cin>>n;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=1;j<=i+1;j++){
                sum=sum+1;
                cout<<sum;
            }
            sum--;
            cout<<endl;
        }
        return 0;
    }
    
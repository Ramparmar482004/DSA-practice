#include<iostream>
using namespace std;
    int main(){
        int a;
        cout<<"Enter a number A: ";
        cin>>a;
        int n=0;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                n=n+1;
                cout<<n<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
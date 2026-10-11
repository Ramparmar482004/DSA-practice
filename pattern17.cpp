#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of ch -> ";
    cin>>n;
    for (int i=0; i<n; i++){
        for(int j=n;j>i+1;j--){
            cout<<" ";
        }
        char ch = 'A';
        for (int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        char G= 'A';
        char d;
        for(int j=G+(i-1);j>=G;j--){
            d=j;
            cout<<d;
        }
        cout<<endl;
    }
    return 0;
}
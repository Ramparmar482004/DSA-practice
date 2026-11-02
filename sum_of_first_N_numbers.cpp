#include<iostream>
using namespace std;
    int NnumbersSum(int N){
        int sum = 0;
        for (int i=1;i<=N;i++){
            sum=sum+i;
        }
        return sum;
    }
    int main(){
        int n;
        cout<<"Enter the number -> ";
        cin>>n;
        cout<<NnumbersSum(n);
        return 0;
    }
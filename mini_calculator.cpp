#include<iostream>
using namespace std;
    int main(){
        int A;
        cout<<"Enter the value of A -> ";
        cin >>A;
        int B;
        cout <<"Enter the value of B -> ";
        cin>>B;
        char OP;
        cout<<"Enter the operation you want to perform -> ";
        cin>>OP;
        switch (OP)
        {
        case '+': cout<<(A+B)<<endl; 
                break;

        case '-': cout<<(A-B)<<endl; 
                break;

        case '*': cout<<(A*B)<<endl; 
                break;

        case '/': cout<<(A/B)<<endl; 
                break;

        case '%': cout<<(A%B)<<endl; 
                break;

        default: cout<<"Please enter valid operation ";
                break;
        }
        return 0;
    }
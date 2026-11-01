#include<iostream>
using namespace std;
    int main(){
        int arr[100];
        int n;
        cout <<"Enter the number of element -> ";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum = arr[0];
        for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        }
        arr[n-1] = sum;
        for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }

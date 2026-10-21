#include<iostream>
using namespace std;
    int countOdd(int arr[], int n){
        int count = 0;
        for ( int i=0; i<n; i++){
            if(arr[i]%2!=0){
                count = count+1;
            }
        }
        return count;
    }
    int main(){
        int arr[100];
        int n;
        cout<<"Enter the number of element -> ";
        cin>>n;
        cout <<endl;
        cout <<"Enter "<< n <<" element velue -> ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<endl;
        cout<<"The odd number in array is -> ";
        cout<< countOdd(arr,n);
        return 0;
    }
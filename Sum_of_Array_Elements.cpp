#include<iostream>
using namespace std;
    int sum(int arr[], int n) {
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        return sum;
	}
    int main(){
        int arr[100];
        int n;
        cout <<"Enter the number of element -> ";
        cin>>n;
        cout<<"Enter "<< n <<" element value -> ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<endl;
        cout<<"sum of array -> " <<sum(arr,n);
    }
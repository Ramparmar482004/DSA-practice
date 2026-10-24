#include <iostream>
using namespace std;
    int Largest(int arr[],int n){
        int max_element=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max_element){
                max_element=arr[i];
            }
        }
        return max_element;
    }
    int main(){
        int arr[100];
        int n;
        cout<<"Enter the number of element -> ";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Largest element is -> ";
        cout<<Largest(arr,n);
        return 0;
    }
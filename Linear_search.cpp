#include<iostream>
using namespace std; 
    void linearSearch(int arr[],int n, int search) {
        for(int i=0; i<n; i++){
            if (arr[i]==search){
                cout<<"your searching element value is present in index number -> "<<i;
                return ;
            }
        }
        cout<<"Your element value is not Found ";
    }
    int main(){
        int arr[10]={1,2,5,4,3,6,8,7,9,5};
        int n;
        cout<<"Enter the number of element -> ";
        cin>>n;
        int search;
        cout<<"Enter which number you want to search  -> ";
        cin>>search;
        linearSearch(arr,n,search);
        return 0;
    }
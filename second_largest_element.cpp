#include<iostream>
#include<climits>
using namespace std;
    int second_largest_array(int arr[], int n){
        if(n<2){
            return -1;
        }
        int largest = arr[0];
        int second_largest = INT_MIN; 
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                second_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]>second_largest && arr[i] != largest){
                second_largest =arr[i];
            }
        }
        if (second_largest == INT_MIN){
            return -1;
        }
        return second_largest;
    }
    void print(int arr[],int n){
        for (int i=0; i<n; i++){
            cout<<arr[i];
        }
    }
    int main(){
        int arr[20];
        int n;
        cout<<"Enter the number of element -> ";
        cin>>n;
        cout<<"Enter "<<n<<" element value -> ";
        cout<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"You Enterd the folowing values -> ";
        print(arr,n);
        cout<<endl;
        cout<<"The second largest number is -> ";
        cout<<second_largest_array(arr,n);
        return 0;
    }
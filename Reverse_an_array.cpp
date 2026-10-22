#include<iostream>
using namespace std;
    void reverse(int arr[], int n) {
        int start = 0;
        int end = n - 1;
        while (start <= end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void printarray(int arr[], int n) {
        reverse(arr,n);
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
        cout << endl;
    }
    int main() {
        int arr[5]={2,3,4,7,8};
        int n;
        cout<<"Enter the number of element ->";
        cin>>n;
        cout <<"reverse of an array is ->";
        printarray(arr, n);
        return 0;
    }
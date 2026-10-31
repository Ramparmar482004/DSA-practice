#include <iostream>
using namespace std;
    int main(){
        int arr[3][3];
        int n;
        cout<<"Enter the number of element-> ";
        cin>>n;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"your 2D array is -> ";
        cout<<endl;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            return 0;
        }
    }
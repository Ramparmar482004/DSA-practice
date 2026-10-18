#include <iostream>
using namespace std;
    void isPerfect(int n){
        int org = n;
        int count = 0;
        for (int i=1;i<n;i++){
            if(n%i == 0){
            count = count + i;
            }
        }
        if (count == org){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }
    int main(){
        int n;
        cout<<"Enter the number ->";
        cin>>n;
        isPerfect(n);
    }
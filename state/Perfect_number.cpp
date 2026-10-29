#include <iostream>
using namespace std;
    void checkPerfectNumber(int num) {
        int count = 0;
        int org = num;
        for (int i=1;i<num;i++){
            if(num%i==0){
                count = count+i; 
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
        cout<<"Enter the number -> ";
        cin>>n;
        checkPerfectNumber(n);
        return 0;
    }
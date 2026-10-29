#include<iostream>
using namespace std;
    void search(int nums[],int n, int target) {
        int left = 0, right = int (n);
        while(left<right){
            int mid =left +(right-left)/2;
            if(nums[mid]<=target){
                left=mid + 1;
            }
            else{
                right = mid;
            }
        }
        if(left > 0 and nums[left - 1]==target){
            cout<< left -1;
        }
        else{
            cout<<"0";
        }
    }
    int main(){
        int nums[100];
        int n;
        cout<<"Enter the number of element ->";
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>nums[i];
        }
        int target;
        cout<<"Enter which number you want to target for Binary search-> ";
        cin >>target;
        search(nums,n,target);
        return 0;
    }
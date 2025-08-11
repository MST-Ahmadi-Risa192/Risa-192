//check if a given number exists in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the number to search:";
    cin>>target;
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    if(index!=-1)
    cout<<"Number found at index:"<<index<<endl;
    else
    cout<<"-1"<<endl;
    return 0;
}
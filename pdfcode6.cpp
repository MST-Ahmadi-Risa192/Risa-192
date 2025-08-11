//Traverse the array and count how many even and odd numbers are present.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<"elements:/n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int evenCount=0,oddCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"Number of  even numbers:"<<evenCount<<endl;
    cout<<"Number of odd numbers:"<<oddCount<<endl;
    return 0;
}
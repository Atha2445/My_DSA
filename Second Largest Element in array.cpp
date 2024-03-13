#include<bits/stdc++.h>
using namespace std;

void secondLargest(int arr[],int n){
    int f,s=INT_MIN;
    if(n<2){
        cout<<"Invalid Input"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>f){
            s=f;
            f=arr[i];
        }
        else if(arr[i]<f && arr[i]>s){
            s=arr[i];
        }
        
    }
    cout<<"Second Largest Element in Array is: "<<s<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    secondLargest(arr,n);
    return 0;
}

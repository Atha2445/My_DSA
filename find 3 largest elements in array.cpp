#include<bits/stdc++.h>
using namespace std;

void find3Largest(int arr[],int n){
    int f,s,t;
    if(n<3){
        cout<<"Invalid Input";
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>f){
            t=s;
            s=f;
            f=arr[i];
        }
        else if(arr[i]>t && arr[i]<f){
            t=s;
            s=arr[i];
        }
        else if(arr[i]>t && arr[i]<s && arr[i]<f){
            arr[i]=t;
        }
    }
    cout<<"Three Largest Number's are: "<<f<<" "<<s<<" "<<t<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    find3Largest(arr,n);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    const int maxSize=100;
    int size;
    cin>>size;
    int arr[maxSize];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int newEle;
    cin>>newEle;
    if(size<maxSize){
        arr[size]=newEle;
        size++;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Array is full"<<endl;
    }
    return 0;
    
}

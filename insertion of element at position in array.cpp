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
    int pos,newEle;
    cin>>pos;
    cin>>newEle;
    for(int i=size;pos<i;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=newEle;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;

void change(int n,int arr[]){
    sort(arr,arr+n);
    int ans[n];
    int start=0,end=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans[i]=arr[end--];
        }
        else{
            ans[i]=arr[start++];
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    change(n,arr);
    return 0;
}

// Here first there was a given array; Which I sort. Then I make another array for 
// answer. I also made 2 variables "start" and "end", which points starting and 
// ending position of sorted array. Then in answer array I use for loop and in that 
// for loop I use if-else condition to seperate even and odd position.
//  For even position I put end value of sorted array and decrement it and for odd position
//  I put starting value and Increment it then I print array.


#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        q.push(a);
    }
    while(!q.empty()){
        int f=q.front();
        cout<<f<<" ";
        q.pop();
    }
    cout<<endl;
    
    return 0;
}

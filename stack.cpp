#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        s.push(ele);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	cout<<"Transversing of Array"<<endl;
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
}

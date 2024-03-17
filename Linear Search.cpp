// C++ code to linearly search x in arr[].

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int n;
	cin>>n;
	int key;
	cin>>key;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}

	// Function call
	int result = search(arr, n, key);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

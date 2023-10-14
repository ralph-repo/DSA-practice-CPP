#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool sorted(int arr[], int n){
	if(n==1){
		return true;
	}
	return (arr[0]<arr[1] && sorted(arr+1, n-1));
}

int main() {
	// Your code goes here;
	int arr[5]={1,2,3,4,3};
	cout<<sorted(arr,5);
	return 0;
}
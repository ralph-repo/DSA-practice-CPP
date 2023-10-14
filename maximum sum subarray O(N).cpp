#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int currSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		currSum+=a[i];
		if(currSum<0){
			currSum=0;
		}	
		maxSum=max(currSum,maxSum);
	}
	
	cout<<maxSum;
	return 0;
}
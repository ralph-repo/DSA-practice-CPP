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
	int currSum[n];
	currSum[0]=0;
	for(int i=1;i<=n;i++){
		currSum[i]=a[i-1]+currSum[i-1];
	}
	int maxSum=INT_MIN;
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<i;j++){
			sum=currSum[i]-currSum[j];
			maxSum=max(sum,maxSum);
		}
	}
	
	cout<<maxSum;
	return 0;
}
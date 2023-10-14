#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	const int N=1e6+2;
	int test[N];
	for(int i=0;i<N;i++){
		test[i]=false;
	}
	int j=0;
	while(j<n){
		test[a[j]]=true;
		j++;
	}
	j=0;
	while(j<n){
		if(test[j]==false)
			break;
		j++;
	}
	cout<<j;
	return 0;
}
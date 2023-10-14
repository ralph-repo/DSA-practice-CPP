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
	int idx[N];
	for(int i=0;i<N;i++){
		idx[i]=-1;
	}
	int minidx= INT_MAX ;

	for(int i=0;i<n;i++){
		if(idx[a[i]]==-1)
			idx[a[i]]=i;
		else if(idx[a[i]]!=-1 && minidx>i)
			minidx=idx[a[i]];
	}
	cout<<minidx;
	return 0;
}
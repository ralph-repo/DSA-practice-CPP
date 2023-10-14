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
	int ans=0;
	int lar=a[0];
	for(int i=1;i<n;i++){
		lar=max(a[i-1],lar);
		if(a[i]>lar && a[i]>a[i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
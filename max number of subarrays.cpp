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
	int pd=a[1]-a[0];
	int j=2;
	int curr=2,ans=2;
	while(j<n){
		if(pd == a[j]-a[j-1]){
			curr++;
		}
		else{
			pd=a[j]-a[j-1];
			curr=2;
		}
		ans=max(ans,curr);
		j++;
	}
	cout<<ans;
	return 0;
}
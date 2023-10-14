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
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<a[k]<<"\t";
			}
			cout<<endl;
		}
	}
	return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
int unique(int a[], int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum = xorsum^a[i];
	}
	return xorsum;
}
void unique2(int a[], int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum = xorsum^a[i];
	}
	int pos=0;
	for(int i=0;i<n;i++){
		if((xorsum & (1<<i)))
			break;
		pos=i+1;
	}
	printf("%d",pos);
	int xors=0;
	for(int i=0;i<n;i++){
		if(a[i] & (1<<pos)){
			xors= xors ^ a[i];
			printf("%d\t",a[i]);
		}
	}
	int x= (xors ^ xorsum);
	printf("%d %d",xors,x);
	//cout << xors << "\t" << x ;
}
using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	unique2(a, n);
	return 0;
}
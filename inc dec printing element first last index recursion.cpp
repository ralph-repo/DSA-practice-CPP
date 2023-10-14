#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// int dec(int n){
// 	if(n==0){
// 		return 0;
// 	}
// 	cout<<n<<endl;
// 	return dec(n-1);
// }
// int inc(int n){

// 	 if(n==0){
// 		return 0;
// 	 }
// 	 inc(n-1);
// 	 cout<<n<<endl;
// }

int firstoccur(int arr[], int n, int i, int k){
	if(i==n){
		return 0;
	}
	if(arr[i]==k){
		cout<<i+1<<endl;
		return 0;
	}
	firstoccur(arr,n,i+1,k);
}
int secoccur(int arr[], int n, int i, int k){
	if(i==0){
		return 0;
	}
	if(arr[i]==k){
		cout<<i+1<<endl;
		return 0;
	}
	secoccur(arr,n,i-1,k);
}

int main() {
	// Your code goes here;
	int arr[8]={1,2,3,2,5,6,9,2};
	firstoccur(arr,8,0,2);
	secoccur(arr,8,8,2);
	// int n;
	// cin>>n;

	// inc(n);
	// dec(n);
	return 0;

}

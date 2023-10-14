#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	// if(!(n & n-1)){
	// 	cout<<n<<" is power of 2"<<endl;;
	// }
	// int count = 0;
	// for(int i=0;i< 1<<n; i++){
	// 	n= n & n-1;
	// 	count++;
	// }
	// cout<<count;
	int arr[4] = {1,2,3,4};
	for(int i=0;i< (1<<4); i++){
		for(int j=0;j<4;j++){
			if(i & (1<<j)){
				cout<<arr[j]<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;
}
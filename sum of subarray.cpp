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
	int s;
	cin>>s;
	int st=-1;
	int en=-1,currSum=0;
	int j=0,i=0;
	while(currSum+a[j]<=s){
		currSum+=a[j];
		j++;
	}
	if(currSum==s){
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}
	while(j<n){
		currSum += a[j];
		while(currSum>s){
			currSum -= a[i];
			i++;
		}
		if(currSum == s){
			st=i+1;
			en=j+1;
			break;
		}
		j++;	
	}
	cout<< st << " " <<en<<endl;
	return 0;
}
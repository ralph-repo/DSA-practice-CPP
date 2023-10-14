#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void sievePrime(int n){
	int a[n]={0};
	for(int i=2;i<n;i++){
		if(a[i]==0)
		for(int j=i*i;j<n;j+=i){
			a[j]=1;
		}
	}
	for(int i=2;i<n;i++)
	{
		if(a[i]==0)
		cout<<i<<endl;
	}

}

void factorisation(int n){
	int spf[n]={0};
	for(int i=0;i<=n;i++){
		spf[i]=i;
	}
	for(int i=2; i<=n; i++){
		if(spf[i]==i)
		for(int j=i*i;j<=n;j+=i){
			spf[j]=i;
			
		}
	}
	while(n!=1){
		cout<<spf[n]<<"\t";
		n/=spf[n];
	}
}
int main() {
	// Your code goes here;
	int n;
	cin>>n;
	sievePrime(n);
	factorisation(n);
	return 0;
}
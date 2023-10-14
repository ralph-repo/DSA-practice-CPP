#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	// Your code goes here;
	string str;
	getline(cin, str);
	cin.ignore();
	int arr[26];
	for(int i=0;i<26;i++){
		arr[i]=0;
	}
	for(int i=0;i<str.size();i++){
		arr[str[i]-'a']++;
	}
	char max;
	int count=0;
	for(int i=0;i<26;i++){
		if(arr[i]>count){
			 max='a'+ i;
			 count =arr[i];
		}
	}
	cout<< max <<"   "<< count;
	return 0;
}
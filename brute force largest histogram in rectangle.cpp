// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[6]={2,1,5,6,2,3};
    int n=6,ans,len,minh;
    for(int i=0;i<n;i++){
        minh=INT_MAX;
        for(int j=i;j<n;j++){
            minh=min(minh,arr[j]);
            len=j-i+1;
            ans=max(ans,len*minh);
        }
    }
    cout<<ans;
    return 0;
}
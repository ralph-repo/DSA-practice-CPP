// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int trap(int arr[],int n){
    stack<int> s;
    int ans=0;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]<arr[i]){
            int tp=s.top();
            s.pop();
            if(s.empty())
                break;
            else{
                int diff=i-s.top()-1;
                ans+=(min(arr[s.top()],arr[i])-arr[tp])*diff;
            }
        }
        s.push(i);
    }
    return ans;
}
int main() {
    // Write C++ code here
    int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=12;
    cout<<trap(arr,n)<<endl;
    return 0;
}
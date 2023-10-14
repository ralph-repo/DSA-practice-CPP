/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include "bits/stdc++.h"
using namespace std;
// vector<vector<int>> ans;
void permute(int arr[], int n,int idx){
    if(idx==n-1){
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        return;
    }
    
    for(int i=idx;i<n;i++){
        swap(arr[i],arr[idx]);
        permute(arr,n,idx+1);
        swap(arr[i],arr[idx]);
    }
}
// void permute(vector<int> &a, int idx){
//     if(idx==a.size()){
//         ans.push_back(a);
//         return;
//     }
    
//     for(int i=idx;i<a.size();i++){
//         swap(a[i],a[idx]);
//         permute(a, idx+1);
//     }
//     return;
// }

// void permutation(string str, string ans){
//     if(str.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         string ros=str.substr(0,i)+str.substr(i+1);
        
//         permutation(ros, ch+ans);
//     }
// }

int main ()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  permute(arr,n,0);
  
//   vector<int> a(n);
//   for(auto &i : a)
//     cin>>i;
  
//   permute(a,0);
//   for(auto v : ans){
//       for(auto i : v)
//         cout<<i<<" ";
//     cout<<"\n";
//   }
//   string s="";
//   for(int i=0;i<n;i++){
//       s= s+to_string(arr[i]);
//   }
//   permutation(s,"");
//   return 0;
}

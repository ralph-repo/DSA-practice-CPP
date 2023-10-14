/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int>p2){
    return p1.first<p2.first;
}

int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
             // 0 1  2 3  4 5 6 7
    vector< pair<int, int>> v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        pair<int, int> p;
        p.first=arr[i];
        p.second=i;
        v.push_back(p);
    }
    
    sort(v.begin(),v.end(),myCompare);
    
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<" ";
    }
}

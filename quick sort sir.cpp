/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
void inSort(int* arr, int l,int r){
    int i,j;
    for(i=1;i<=r;i++){
        int temp=arr[i];
        for(j=i;j>0;j--){
            if(arr[j-1]>temp){
                arr[j]=arr[j-1];
            }
            else break;
        }
        arr[j]=temp;
    }
}
int main() {
    // Write C++ code here
    int n;
    cin>>n; 
    int* arr;
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    inSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
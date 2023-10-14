/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int partition(int* arr, int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quickSort(int* arr, int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
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
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
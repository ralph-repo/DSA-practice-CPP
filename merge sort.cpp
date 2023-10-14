/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    
    int a[n1];
    int b[n2];
    
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }
    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    
    while(i<n2){
        arr[k]=b[j];
        j++;k++;
    }
    
    
    
}
void mergeSort(int arr[], int n, int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,n,l,mid);
        mergeSort(arr,n,mid+1,r);
        
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[5]={2,4,5,1,3};
    mergeSort(arr, 5, 0, 4);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}

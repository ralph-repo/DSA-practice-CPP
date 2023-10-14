/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int merge(int arr[], int l, int mid, int r){
    int inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
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
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
            inv+=n1-i;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;
    }
    return inv;
}
int mergeSort(int arr[], int l, int r){
    int inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergeSort(arr, l, mid);
        inv+=mergeSort(arr, mid+1, r);
        
        inv+=merge(arr,l,mid,r);
    }
    return inv;
}

int main()
{
    int arr[]={3,5,6,9,1,2,7,8};
    cout<<mergeSort(arr, 0, 7)<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

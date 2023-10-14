// Online C compiler to run C program online
#include <stdio.h>
void radixSort(int *arr, int n){
    int sort[n][n];             //matrix for sorting
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sort[i][j]=-1;      //matrix initialise with flag -1
        }
    }
    int x=1;
    for(int i=0;i<9;i++){
        int check=0;            //check used for no. of digit
        for(int i=0;i<n;i++){
            int row=(arr[i]/x)%10;
            sort[row][i]=arr[i];    //row for getting digit 
            if(row==0)
                check++;
        }
        x=x*10;
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){   //finding the flag and if not
                if(sort[i][j]!=-1){ //not found then value given to 
                    arr[k]=sort[i][j];  //array
                    k++;
                    sort[i][j]=-1;
                }
            }
        }
        if(check==n)
            break;
    }
}
void countSort(int *arr,int n){
    int count[15];              //array initialised with key
    for(int i=0;i<15;i++){
        count[i]=0;             //array initialised with 0
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;        //count[arr[i]] incremented for 
    }                           //freuency of arr[i]
    int j=0;
    for(int i=0;i<15;i++){
        int temp=count[i];
        while(temp!=0){         //sorting the given array
            arr[j]=i;
            j++;
            temp--;
        }
    }
}
int main() {
    // Write C code here
    int arr[]={1,0,3,1,14,3,5,8,12};
    int arr2[]={348,143,361,423,538,128,321,543,366};
    for(int i=0;i<9;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    countSort(arr,9);
    for(int i=0;i<9;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<9;i++){
        printf("%d\t",arr2[i]);
    }
    printf("\n");
    radixSort(arr2,9);
    for(int i=0;i<9;i++){
        printf("%d\t",arr2[i]);
    }
    printf("\n");
    
    return 0;
}
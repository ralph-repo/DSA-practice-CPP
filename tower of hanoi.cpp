/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void toh(int n, char src, char dest, char help){
    if(n==0){
        return;
    }
    toh(n-1, src, help, dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    toh(n-1, help, dest, src);
}

int main()
{
    int n=3;
    char src='A',help='B',dest='C';
    toh(n,src,dest,help);
    return 0;
}

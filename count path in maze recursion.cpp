#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countpathmaze (int n, int i, int j)
{
  if(i==(n-1) && j==(n-1)){
     return 1;
  }

  if(i > n || j > n){
    return 0;
  }

  return countpathmaze(n, i+1, j) + countpathmaze(n, i, j+1);
}

int main ()
{

  int i, j, n;
  i = 0;
  j = 0;
  n = 3;
  cout << countpathmaze (3,0,0);
  return 0;
}

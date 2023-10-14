/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;
string keyword[] =
  { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

int countpath(int s, int e)
{
  if(s==e)
    return 1;
  if(s>e)
    return 0;
  
  int count=0;
  for(int i=1;i<=6;i++){
      count+=countpath(s+i,e);
  }    
  return count;
}

int
main ()
{

  int s,e;
  s=0;
  e=3;
  cout<<countpath(s,e);
  return 0;
}

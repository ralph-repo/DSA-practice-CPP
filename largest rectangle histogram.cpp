// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(int heights[],int n) {
  stack < int > stk;
  stk.push(-1);
  int max_area = 0;
  for (size_t i = 0; i < n; i++) {
    while (stk.top() != -1 and heights[stk.top()] >= heights[i]) {
      int current_height = heights[stk.top()];
      stk.pop();
      int current_width = i - stk.top() - 1;
      cout<<stk.top()<<"\t"<<current_height<<"\t"<<current_width<<endl;
      max_area = max(max_area, current_height * current_width);
    }
    stk.push(i);
    cout<<i<<endl;
  }
  while (stk.top() != -1) {
    int current_height = heights[stk.top()];
    stk.pop();
    int current_width = n - stk.top() - 1;
    max_area = max(max_area, current_height * current_width);
  }
  return max_area;
}
int main() {
    // Write C++ code here
    int arr[6]={2,1,5,6,2,3};
    int n=6;
    cout<<largestRectangleArea(arr,n);
    return 0;
}
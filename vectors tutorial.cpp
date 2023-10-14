/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    v.pop_back();
    vector<int> v1(3,50);
    swap(v,v1);
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
}

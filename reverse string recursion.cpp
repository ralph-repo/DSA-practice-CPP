#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int revStr(string str){
    if(str.length()==0)
        return 0;
    revStr(str.substr(1));
    cout<<str[0];
}

int main(){
    string str;
    getline(cin,str);
    revStr(str);
}

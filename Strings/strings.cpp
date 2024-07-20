#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s = "Gyanranjanpatra";
    int len = s.size();
    s[len-1] = 'o';
    cout<<s[len-1]<<len<<'\n';
    cout<<s;    

    return 0 ;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter The Size Of The Array : ";
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(j =0; j<2*i+1; j++){
            cout<<"*";
        }
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
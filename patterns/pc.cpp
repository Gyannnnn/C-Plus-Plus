#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter The Size Of The Pattern : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n-i; j>=0; j--){
            cout<<" ";
        }
        for(j=i+1; j<n; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
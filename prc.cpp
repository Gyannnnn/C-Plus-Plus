#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastDigit,count=0;
    cout<<"Enter The Number : ";
    cin>>n;
    while(n>0){
        lastDigit = n%10;
        count++;
        cout<<lastDigit<<" "<<endl;
        n = n/10;

    }
        cout<<"The Size Of The Entered Number Is "<<count;
    return 0;
}
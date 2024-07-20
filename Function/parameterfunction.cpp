#include<bits/stdc++.h>
using namespace std;

int  twoSum(int a,int b){
    return a+b;
}


int main(){
    int a,b;
    cout<<"Enter The Value Of The Two Numbers";
    cin>>a>>b;
    int res = twoSum(a,b);
    cout<<"Required Sum Is "<<res;

    return 0;
}
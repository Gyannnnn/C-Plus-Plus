#include<bits/stdc++.h>
using namespace std;

int maxN(int num1,int num2){
  if(num1>num2){
    return num1;
  }else if(num1 == num2){
    return -1;
  }
  return num2; // always return a value , otherwise it would throw a garbage value;
}


int main(){
  int num1,num2;
  cout<<"Enter The Two Numbers   ";
  cin>>num1>>num2;
  int maxnum = maxN(num1,num2);
  if(maxnum == -1){
    cout<<"Both Numbers Are Equal";
  }else{
  cout<<"Maximum Number Is : "<<maxnum;

  }
  return 0;
}
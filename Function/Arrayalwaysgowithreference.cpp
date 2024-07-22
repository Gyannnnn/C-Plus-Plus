#include<bits/stdc++.h>
using namespace std;

void dosomething(int arr[],int n){
    arr[0] += 100;
    cout<<arr[0]<<endl;

}

// ⭐ array are always pss by referenve 


int main(){
    int n;
    cout<<"Enter The Size Of The Array ";
    cin>>n;
    int arr[n];
    for (int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    dosomething(arr,n);
    cout<<arr[0]<<endl;

    return 0;
}
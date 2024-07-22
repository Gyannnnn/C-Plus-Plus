#include<bits/stdc++.h>
using namespace std;


//pass by value
void dosomething(int num){
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
}
// pass by reference;
// & sign -> reference it gives its adres and thus original value ... so the value is change after if we do some operation

void passByReference(string &s){
    cout<<s;\
    s[0] = 'r';
    cout<<s<<endl;

}
int main(){
    int num;
    string s;
    cout<<"Enter A Number ";
    cin>>num;
    cout<<"Enter The String";
    cin>>s;
    dosomething(num);
    passByReference(s);
    cout<<s<<endl;
    cout<<num;
    return 0;
}
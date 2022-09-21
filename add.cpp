#include<iostream>
using namespace std;
int main(){
    int a,  b, sum,sub,mul,div;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    cout<<a<<" - "<<b<<" = "<<sub<<endl;
    cout<<a<<" * "<<b<<" = "<<mul<<endl;
    cout<<a<<" / "<<b<<" = "<<div<<endl;
    return 0;

}
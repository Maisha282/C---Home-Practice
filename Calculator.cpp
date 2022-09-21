#include<iostream>
using namespace std;

int main(){
    char ope;
    float num1, num2,sum,sub,mul,div;
    cout<<"Enter the operands (+,-,*,/): "<<endl;
    cin>>ope;
    cout<<"Enter number1: "<<endl;
    cin>>num1;
    cout<<"Enter number2: "<<endl;
    cin>>num2;
    switch(ope){
        case '+': 
        sum = num1+num2;
        cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
        break;
        case '-':
        sub = num1-num2;
          cout<<num1<<" - "<<num2<<" = "<<sub<<endl;
        break;
        case '*':
        mul = num1*num2;
          cout<<num1<<" * "<<num2<<" = "<<mul<<endl;
        break;
         case '/':
        div = num1/num2;
          cout<<num1<<" / "<<num2<<" = "<<div<<endl;
        break;
        default:
         cout << "Error!!!! operator is not correct";
         break;

        

        
    }
   

}
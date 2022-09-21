#include <iostream>
using namespace std;
int main()
{
    int i;
    // cout << " The natural numbers are: ";
    // for (i = 1; i <= 10; i++) 
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    int sum = 0;
    cout<<"Sum of 10 natural numbers: ";
    for(i=0;i<10;i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
    return 0;

}
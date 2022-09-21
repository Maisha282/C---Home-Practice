#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number > 0) {
    cout << "Number is a positive integer. "  << endl;
  }

  else if(number<0)
  {
    cout<<"Number is a negative integer."<<endl;
  }
  else{
    cout<<"Number is zero."<<endl;
  }

  return 0;
}
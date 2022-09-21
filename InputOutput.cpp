#include<iostream>
using namespace std;
int main()
{
   string name;
   cout<<"Enter Name: "<<endl;
   getline(cin,name);

   int id;
   cout<<"Enter Id: "<<endl;
   cin>>id;

   double cgpa;
   cout<<"Enter Cgpa: "<<endl;
   cin>>cgpa;

   cout<<"Name: "<<name<<endl;
   cout<<"Id: "<<id<<endl;
   cout<<"Cgpa: "<<cgpa<<endl;
   return 0;


}
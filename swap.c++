//Swap two numbers without using a third variable

#include<iostream>
using namespace std;
int main()
{
    //Declare variables
     int a,b;
    //Input 
  cout<<"enter two numbers:"<<endl;
  cin>>a>>b;
    //Concept
  b= a+b;
  a= b-a;
  b= b-a;
  

    //Output
cout<<"value of a"<<a<<endl;
cout<<"value of b"<<b;
}








  
     
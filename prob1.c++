//problem to take two numbers as input and provides sum and average

#include<iostream>
using namespace std;
int main()
{
    //Declare variables
    int a,b,sum ,avg;
    //Input 
   cout<<"enter two numbers:"<<endl;
  cin>>a;
  cin>>b;
    //Concept
   sum = a+b;
   avg=sum/2;

    //Output
   cout<<"sum of two numbers:"<<sum<<endl;
  cout<<"average of two numbers:"<<avg;
}
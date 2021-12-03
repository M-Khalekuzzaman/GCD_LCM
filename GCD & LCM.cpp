#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
  cout<<"Enter your two number are : ";
cin>>num1>>num2;

  int n1,n2,rem;
  n1 = num1;
  n2 = num2;
  while(n2!= 0)
  {
      rem = n1 % n2;
      n1 = n2;
      n2 = rem;
  }
   int lcm= (num1*num2)/n1;
  cout<<"Greatest common divisor is(GCD) : "<<n1<<endl;
 cout<<"Least common multople is(LCM) : "<<lcm<<endl;


    getch();
}

#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter your two number are : ");
  scanf("%d%d",&num1,&num2);

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
  printf("Greatest common divisor is(GCD) : %d\n",n1);
  printf("Least common multiple is(LCM) : %d\n",lcm);


    getch();
}

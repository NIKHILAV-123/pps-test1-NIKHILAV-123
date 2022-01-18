

#include<stdio.h>

//you can return only one thing from a function at a time
//functions are reuseble block of code.
int input()
{
  //to take input from user
  int num;
  printf("enter a number:\n");
  scanf("%d%d", &num);
  return num1, num2;
}
int add(int a, int b)
{
  int sum;
  sum = a + b;
  return sum;
}
void output(int a, int b,int sum)
{
  //to print the final result i.e sum of 2 numbers
  printf("sum of %d and %d is %d\n", a, b, sum);
}
int main()
{
  int num1, num2;
num1 = input();
num2 = input();

int sum;
sum = add(num1, num2);

output(num1, num2, sum);

return 0;
}

//add two numbers

#include<stdio.h>
void add(); //funtion declaration
int main()
{
//int num1=3;
 add();     //funtion call
  return 0;
}
void add()    //funtion definition
{
int num1,num2;
float sum;
printf("enter two numbers\n");
scanf("%d%d", &num1, &num2);
sum= num1 +num2;
printf("addition of %d + %d is =%f\n",num2,num1,sum);
}





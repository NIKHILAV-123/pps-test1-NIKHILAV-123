#include<stdio.h>

void input(int *a,int *b,int *c)
{
  int n;
  printf("enter three numbers:\n");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *la)
{
  if(a>b && a>c)
  *la=a;
  else if(b>a && b>c)
  *la=b;
  else
  *la=c;
}

void output(int a,int b,int c,int lar)
{
  printf("greatest number among %d %d and %d is %d",a,b,c,lar);
  
}
int main()
{
  int a,b,c,l;
  input(&a,&b,&c);
  cmp(a,b,c,&l);
  output(a,b,c,l);
}
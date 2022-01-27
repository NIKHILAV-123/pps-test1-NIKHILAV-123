#include<stdio.h>

int input_array_size()
{
  int n;
  printf("enter the number of numbers to be added\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int* a[n])
{
  printf("enter the values to be added\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d", &a[i]);

  }
}
int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum += a[i];
  }
  return sum;
}
void output(int n, int a[n], int sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%d+", a[i]);

  }
  printf("%d = %d\n", a[n-1],sum);
}
int main()
{
  int a,c;
  a = input_array_size();
  int b[a];
  input_array(a,b);
  c=sum_n_arrays(a,b);
  output(a,b,c);
  return 0;
}
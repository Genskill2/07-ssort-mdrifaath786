#include <stdio.h>
/*swap max function*/
void swap_max(int a[],int l,int n)
{
 int large=a[n];
for(int i=n;i<l;i++)
{
  if(large<a[i])
  {
    large=a[i];
    int m=i;
  }
 }
 a[m]=a[n];
 a[n]=large;
}
/*ssort* function/
void ssort(int a[],int l)
{
  for(int i=0;i<l;i++)
  {
  swap_max(a,l,i);
  }
}

#include <stdio.h>
int shellsort(int a[],int n);
int shellsort(int a[],int n)
{
  int i,j,gap,temp;
  for(gap=n/2;gap>=1;gap=gap/2)
  for(j=gap;j<n;j++)
  for(i=j-gap;i>=0;i=i-gap)
  if(a[i+gap]>a[i])
  break;
  else 
  {
    temp=a[i+gap];
    a[i+gap]=a[i]; 
    a[i]=temp;
  }
  printf("The sorted elements are\n");
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);
  return 0; 
}
  
int main(void)
{
int a[20],n;
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
shellsort(a,n);
return 0;
}
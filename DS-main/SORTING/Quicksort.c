#include <stdio.h>
int partition(int A[],int low,int high)
{
    int i,j,pivot,t;
    i=low;
    j=high+1;
    pivot=A[low];
    do
    {
       do
       {
        i=i+1;
       } while (A[i]<pivot);
       do
       {
         j=j-1;
       } while (A[j]>pivot);
       if (i<j)
       {t=A[j];
        A[j]=A[i];
        A[i]=t;}

    }while(i<j);
     t=A[j];
     A[j]=A[low];
     A[low]=t;
    return j;
}
void quicksort(int A[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(A,low,high);
        quicksort(A,low,j-1);
        quicksort(A,j+1,high);
    }
}
int main(void)
{
int a[11]={19,17,15,14,16,10,12,9,5,18,7};
a[11]=100;
quicksort(a,0,10);
for(int i=1;i<11;i++)
{
    printf("%d ",a[i]);
}
return 0;
}






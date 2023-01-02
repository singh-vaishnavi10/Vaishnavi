#include<stdio.h>
int BinarySearch(int A[],int N);

/********************************************************************************************/

int main()
{
    int A[20]={0},N;
    printf("Enter The Size Of Array ");
    scanf("%d",&N);
    BinarySearch(A,N);
}

/********************************************************************************************/

int BinarySearch(int A[],int N)
{
    int I,L=0,H=N-1,M,X;
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] ",I);
        scanf("%d",&A[I]);
    }
    printf("Enter The Number To Be Searched ");
    scanf("%d",&X);
    while(L<H)
    {
        M=(L+H)/2;
        if(A[M]==X)
        {
            printf("%d",M);
            break;
        }
        if(X<A[M])
        {
            H=M-1;
        }
        if(X>A[M])
        {
            L=M+1;
        }
    }
}
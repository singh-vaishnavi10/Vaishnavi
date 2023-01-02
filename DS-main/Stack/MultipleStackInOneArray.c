#include<stdio.h>
#include<stdlib.h>
int Top=0;
int Initialize(int N,int M,int I)
{
    Top=(((N/M)*I)-((N/M)+1));
}
void Push(int A[],int N,int M,int I,int X)
{
    if(Top==(((N/M)*I)-1))
    {
        printf("Stack %d Overflow",I);
        exit(1);
    }
    else
    {
        Top=Top+1;
        A[Top]=X;
    }
}
int Pop(int A[],int N,int M,int I)
{
    int X;
    if(Top==(((N/M)*I)-((N/M)+1)))
    {
        printf("Stack %d Underflow",I);
        exit(1);
    }
    else
    {
        A[Top]=X;
        Top=Top-1;
    }
    return X;
}
void Task(int A[],int N,int M)
{
    int X,Y,J,I,K,C;
    printf("Press 1 : To Push\nPress 2 : To Pop\n");
    scanf("%d",&X);
    if(X==1)
    {
        for(J=1;J<=M;J++)
        {
            printf("To Push In Stack %d Press %d :\n",J,J);
        }
        scanf("%d",&I);
        Initialize(N,M,I);
        printf("How Many Elements You Want To Add : ");
        scanf("%d",&K);
        for(J=1;J<=K;J++)
        {
            printf("Enter Element %d : ",J);
            scanf("%d",&Y);
            Push(A,N,M,I,Y);
        }
        printf("\nDo You Want To Do Anything Else If Yes Press 1 Else Press Any Key : ");
        scanf("%d",&C);
        if(C==1)
        {
            return Task(A,N,M);
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
    if(X==2)
    {
        for(J=1;J<=M;J++)
        {
            printf("To Pop From Stack %d Press %d :\n",J,J);
        }
        scanf("%d",&I);
        // Initialize(N,M,I);
        printf("How Many Elemets You Want To Pop : ");
        scanf("%d",&K);
        for(J=1;J<=K;J++)
        {
            printf("%d ",Pop(A,N,M,I));
        }
        printf("\nDo You Want To Do Anything Else If Yes Press 1 Else Press Any Key : ");
        scanf("%d",&C);
        if(C==1)
        {
            return Task(A,N,M);
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
}
int main()
{
    int A[100],N,M,I;
    printf("Enter The Size Of Array : ");
    scanf("%d",&N);
    printf("Enter The Total Number Of Stack You Want : ");
    scanf("%d",&M);
    Task(A,N,M);
}
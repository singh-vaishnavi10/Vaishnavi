#include"LLBasic.H"
void Concatenate(struct Node **CSTART1,struct Node **CSTART2)
{
    struct Node *P;
    struct Node *Q;

    P=(*CSTART1)->Next;
    Q=(*CSTART2)->Next;
    (*CSTART1)->Next=Q;
    (*CSTART2)->Next=P;

     

}
int main()
{
    struct Node *CSTART1,*CSTART2;
    CSTART1=NULL;
    CSTART2=NULL;
    printf(" # Enter Elements In First Linked List # \n");
    Task(&CSTART1);
    printf(" \n# Enter Elements In Second Linked List # \n");
    Task(&CSTART2);
    Concatenate(&CSTART1,&CSTART2);
    Traverse(CSTART2);
}

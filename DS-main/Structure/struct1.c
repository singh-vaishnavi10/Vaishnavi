#include <stdio.h>
struct student 
{
int roll_no;
int section;
float percentage;
int mob_no;
 
};
int main()
{
struct student s[5];
int i;
for(i=0;i<5;i++)
{
scanf("%d", &s[i].roll_no);
scanf("%d", &s[i].section);
scanf("%f",&s[i].percentage);
scanf("%d",&s[i].mob_no);
}
for (i=0;i<5;i++)
{

printf("%d\t", s[i].roll_no);
printf("%d\t", s[i].section);
printf("%f\t", s[i].percentage);
printf("%d\n",s[i].mob_no);

}
return 0;
}
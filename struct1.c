// sturcture - collection of different data type of variable group,
//             same use of array
#include<string.h>
#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int a,b,c,total;
    float per;
};
int main()
{
    struct student st[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&st[i].rollno);
        printf("Enter name: ");
        scanf("%s",&st[i].name);
        printf("Enter maths marks: ");
        scanf("%d",&st[i].a);
        printf("Enter Sci marks: ");
        scanf("%d",&st[i].b);
        printf("Enter Eng marks: ");
        scanf("%d",&st[i].c);
    }
    printf("\nRollno\tName\tMaths\tSci\tEng\tTotal\tPer");
    for (int i = 0; i < 5; i++)
    {
        st[i].total = st[i].a + st[i].b + st[i].c;
        st[i].per = st[i].total/3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",st[i].rollno,st[i].name,st[i].a,st[i].b,st[i].c,st[i].total,st[i].per);
    }
    
    
}

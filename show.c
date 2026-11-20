#include"student.h"
void show(sll *p)
{
if(p==0)
{
printf("NO RECORDS PRESENT\n");
return;
}
while(p)
{
printf("%d %s %f\n",p->rollno,p->name,p->percentage);
p=p->next;
}
}

int count(sll *p)
{
int c=0;
while(p)
{
p=p->next;
c++;
}
return c;
}


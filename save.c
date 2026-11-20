
#include"student.h"
void scan_file(sll **p)
{
FILE *sf=fopen("student.dat","r");
if(sf==0)
return;
while(1)
{
sll *new=malloc(sizeof(sll));
if(fscanf(sf,"%d %49[^0-9] %f",&new->rollno,new->name,&new->percentage)==-1)
{
free(new);
break;
}
new->next=0;
if(*p==0)
*p=new;
else
{
sll *last=*p;
while(last->next)
last=last->next;
last->next=new;
}
}
fclose(sf);
}
void save(sll *p)
{
FILE *sf=fopen("student.dat","w");
while(p)
{
fprintf(sf,"%d %s %f\n",p->rollno,p->name,p->percentage);
p=p->next;
}
fclose(sf);
}


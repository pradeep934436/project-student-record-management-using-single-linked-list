
#include"student.h"
void add(sll **p)
{
int h=0;
sll *new,*check;
new=malloc(sizeof(sll));
printf("ENTER NAME\n");
scanf(" %[^\n]",new->name);
k:
if(my_strlen(new->name)==0)
{
printf("\nTHIS NAME CONTAINS SYMBOL ENTER VALID NAME\n\n");
scanf(" %[^\n]",new->name);
goto k;
}
printf("ENTER MARK IN RANGE 1 TO 100\n");
scanf("%f",&new->percentage);
d:
if(new->percentage<=0||new->percentage>100)
{
printf("this mark is out of range enter marks 1 to 100 \n");
scanf("%f",&new->percentage);
goto d;
}
int i=1;
if(*p!=0)
{
x:
check=*p;
while(check!=0)
{
if(check->rollno==i)
{
i++;
goto x;
}
check=check->next;
}
}
new->rollno=i;
if(*p==0||new->rollno<(*p)->rollno)
{
new->next=*p;
*p=new;
}
else
{
sll *pos=*p;
while((pos->next!=0)&&(new->rollno)>(pos->next->rollno))
pos=pos->next;
new->next=pos->next;
pos->next=new;
}
}

int my_strlen(char *p)
{
int i,c=0,flag=0;
for(i=0;p[i];i++)
if(p[i]>='A'&&p[i]<='Z')
c++;
else if(p[i]>='a'&&p[i]<='z')
c++;
else if(p[i]==32)
c++;
else
flag++;
if(flag==0)
return c;
else
return 0;
}



#include"student.h"
void del_rollno(sll **p)
{
if(*p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
int i;
printf("*** ENTER ROLLNO TO DELETE ***\n");
scanf("%d",&i);
sll *del=*p,*pre;
while(del)
{
if(i==del->rollno)
{
if(del==*p)
*p=del->next;
else
pre->next=del->next;
free(del);
printf("\n*** SUCESSFULLY DELETED ***\n");
return;
}
pre=del;
del=del->next;
}
printf("\n*** ROLLNO NOT FOUND ***\n");
}


void del_name(sll **p)
{
if(*p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
int f=0,i;
char s[50];
sll *k=*p;
printf("\n*** ENTER NAME TO DELETE ***\n");
scanf(" %[^\n]",s);
while(k)
{
if(strcmp(k->name,s)==0)
{
f++;
printf("\nPRESENT NODES : %d %s %f\n",k->rollno,k->name,k->percentage);
}
k=k->next;
}
if(f==0)
printf("\n*****NAME NOT FOUND*****\n");
else if(f==1)
{
sll *del=*p,*pre;
while(del)
{
if(strcmp(s,del->name)==0)
{
if(del==*p)
*p=del->next;
else
pre->next=del->next;
free(del);
printf("\n*** SUCESSFULLY DELETED ***\n");
return;
}
pre=del;
del=del->next;
}
}
else
{
printf("\n*** %d RECORD FOUND IN THIS NAME ENTER ROLLNO TO SEARCH ***\n",f);
scanf("%d",&i);
sll *del=*p,*pre;
while(del)
{
if(del->rollno==i)
{
if(del==*p)
*p=del->next;
else
pre->next=del->next;
free(del);
printf("\n*** SUCESSFULLY DELETED ***\n");
return;
}
pre=del;
del=del->next;
}
}
}

void del_all(sll **p)
{
if(*p==0)
{
printf("***** NO RECORDS FOUND *****\n");
return;
}
int c=0;
sll *del=*p;
while(del)
{
c++;
*p=del->next;
free(del);
del=*p;
}
printf("\n*** ALL %d NODE DELETED WITHOUT MEMORY LEAK ***\n",c);
}

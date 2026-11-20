#include"student.h"
void search_rollno(sll *p)
{
if(p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
int f=0,i;
sll *k=p,*check;
printf("\n*** ENTER ROLLNO TO SEARCH ***\n");
scanf("%d",&i);
while(p)
{
if(i==p->rollno)
{
f=1;
printf("\nPRESENT RECORD : %d %s %f\n",p->rollno,p->name,p->percentage);
char s[50];
printf("\n***ENTER NAME TO MODIFY***\n");
scanf(" %[^\n]",s);
k:
if(my_strlen(s)==0)
{
printf("\nTHIS NAME CONTAINS SYMBOLS ENTER VALID NAME\n\n");
scanf(" %[^\n]",s);
goto k;
}
float m;
printf("\n***ENTER MARK TO MODIFY***\n");
scanf("%f",&m);
d:
if(m<=0||m>100)
{
printf("this mark is out of range enter marks 1 to 100 \n");
scanf("%f",&m);
goto d;
}
strcpy(p->name,s);
p->percentage=m;
}
p=p->next;
}
if(f==0)
printf("\n*****ROLLNO NOT FOUND*****\n");
}

void search_name(sll *p)
{
if(p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
float m;
int f=0,i;
char s[50],j[50];
sll *k=p;
printf("\n*** ENTER NAME TO SEARCH ***\n");
scanf(" %[^\n]",s);
while(p)
{
if(strcmp(p->name,s)==0)
{
f++;
printf("\nPRESENT NODES : %d %s %f\n",p->rollno,p->name,p->percentage);
}
p=p->next;
}
if(f==0)
printf("\n*****NAME NOT FOUND*****\n");
else if(f==1)
{
while(k)
{
if(strcmp(k->name,s)==0)
{
printf("\n***ENTER NAME TO MODIFY***\n");
scanf(" %[^\n]",j);
k:
if(my_strlen(j)==0)
{
printf("\nTHIS NAME CONTAINS SYMBOLS ENTER VALID NAME\n\n");
scanf(" %[^\n]",j);
goto k;
}
printf("\n***ENTER MARK TO MODIFY***\n");
scanf("%f",&m);
w:
if(m<=0||m>100)
{
printf("this mark is out of range enter marks 1 to 100 \n");
scanf("%f",&m);
goto w;
}
strcpy(k->name,j);
k->percentage=m;
}
k=k->next;
}
}
else
{
printf("\n*** %d RECORD FOUND IN THIS NAME ENTER ROLLNO TO SEARCH ***\n",f);
scanf("%d",&i);
while(k)
{
if(i==k->rollno)
{
printf("\n***ENTER NAME TO MODIFY***\n");
scanf(" %[^\n]",j);
y:
if(my_strlen(j)==0)
{
printf("\nTHIS NAME CONTAINS SYMBOLS ENTER VALID NAME\n\n");
scanf(" %[^\n]",j);
goto y;
}
printf("\n***ENTER MARK TO MODIFY***\n");
scanf("%f",&m);
d:
if(m<=0||m>100)
{
printf("this mark is out of range enter marks 1 to 100 \n");
scanf("%f",&m);
goto d;
}
strcpy(k->name,j);
k->percentage=m;
}
k=k->next;
}
}
}
void search_percentage(sll *p)
{
if(p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
float m;
int f=0,i;
char s[50],j[50];
sll *k=p;
printf("\n*** ENTER MARK TO SEARCH ***\n");
scanf("%f",&m);
while(p)
{
if(p->percentage==m)
{
f++;
printf("\nPRESENT NODES : %d %s %f\n",p->rollno,p->name,p->percentage);
}
p=p->next;
}
if(f==0)
printf("\n*****MARK NOT FOUND*****\n");
else if(f==1)
{
while(k)
{
if(k->percentage==m)
{
printf("\n***ENTER NAME TO MODIFY***\n");
scanf(" %[^\n]",j);
k:
if(my_strlen(j)==0)
{
printf("\nTHIS NAME CONTAINS SYMBOLS ENTER VALID NAME\n\n");
scanf(" %[^\n]",j);
goto k;
}
printf("\n***ENTER MARK TO MODIFY***\n");
scanf("%f",&m);
w:
if(m<=0||m>100)
{
printf("this mark is out of range enter marks 1 to 100 \n");
scanf("%f",&m);
goto w;
}
strcpy(k->name,j);
k->percentage=m;
}
k=k->next;
}
}
else
{
printf("\n*** %d RECORD FOUND IN THIS NAME ENTER ROLLNO TO SEARCH ***\n",f);
scanf("%d",&i);
while(k)
{
if(i==k->rollno)
{
printf("\n***ENTER NAME TO MODIFY***\n");
scanf(" %[^\n]",j);
y:
if(my_strlen(j)==0)
{
printf("\nTHIS NAME CONTAINS SYMBOLS ENTER VALID NAME\n\n");
scanf(" %[^\n]",j);
goto y;
}
printf("\n***ENTER MARK TO MODIFY***\n");
scanf("%f",&m);
d:
if(m<=0||m>100)
{
printf("this mark is out of range enter marks 1 to 100 \n");
scanf("%f",&m);
goto d;
}
strcpy(k->name,j);
k->percentage=m;
}
k=k->next;
}
}

}

void sort_name(sll *p)
{
if(p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
sll t,*p1=p,*p2;
int i,j,c=count(p);
for(i=0;i<c-1;i++)
{
p2=p1->next;
for(j=i;j<c-1;j++)
{
if(strcmp(p1->name,p2->name)>0)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;
 
p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->percentage=p2->percentage;
 
p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}
printf("\n*** SUCESSFULLY SORTED COMPLETED***\n");


}

void sort_percentage(sll *p)
{
if(p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
sll t,*p1=p,*p2;
int i,j,c=count(p);
for(i=0;i<c-1;i++)
{
p2=p1->next;
for(j=i;j<c-1;j++)
{
if((p1->percentage)<(p2->percentage))
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;
 
p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->percentage=p2->percentage;
 
p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}
printf("\n*** SUCESSFULLY SORTED COMPLETED***\n");
}

void reverse(sll **p)
{
if(*p==0)
{
printf("\n***** NO RECORDS FOUND *****\n");
return;
}
int i,c=count(*p);
if(c>1)
{
sll *t=*p,**a=malloc(sizeof(sll *)*c);
for(i=0;i<c;i++)
{
a[i]=t;
t=t->next;
}
for(i=c-1;i>0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*p=a[c-1];
printf("\n*** SUCESSFULLY ALL LINKS ARE REVERSED ***\n");
}
else
printf("\n*** ONLY ONE RECORD IS PRESENT ADD MORE RECORD TO REVERSE LINK ***\n");
}

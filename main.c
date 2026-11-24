#include"student.h"
int main()
{
sll *head=0;
scan_file(&head);
int i,e;
char op;
while(1)
{
printf("\n*****ENTER YOUR OPTION*****\n");
printf("\n  a/A) FOR ADD A STUDENT RECORD\n  s/S) FOR VIEW THE RECORD\n  d/D) FOR DELETE A PARTICULAR RECORD\n  l/L) FOR DELETE ALL RECORD\n  m/M) FOR MODIFY A RECORD\n  v/V) SAVE THE RECORDS INTO student.dat FILE\n  t/T) FOR SORT THE RECORDS\n  r/R) REVERSE THE LINKS\n  e/E) FOR EXIT\n\n");
scanf(" %c",&op);

switch(op)
{
case 'a':
case 'A':add(&head);
        break;
case 's':
case 'S':show(head);
        break;
case 'd':
case 'D':h:
        printf("\n  1) FOR DELETE BY ROLLNO\n\n  2) FOR DELETE BY NAME\n\n");
        scanf("%d",&e);
        if(e==1)
        del_rollno(&head);
        else if(e==2)
        del_name(&head);
        else
        {
        printf("\n\n*****INAVID OPTION TRY AGAIN*****\n\n");
        goto h;
        }
        break;
case 'l':
case 'L':del_all(&head);
        break;
case 'm':
case 'M':t:
        printf("\n  1) FOR SEARCH BY ROLLNO TO MODIFY\n\n  2) FOR SEARCH BY NAME TO MODIFY\n\n  3) FOR SEARCH BY PERCENTAGE TO MODIFY\n\n");
        scanf("%d",&e);
        if(e==1)
        search_rollno(head);
        else if(e==2)
        search_name(head);
        else if(e==3)
        search_percentage(head);
        else
        {
        printf("\n\n*****INAVID OPTION TRY AGAIN*****\n\n");
        goto t;
        }
        break;
case 'v':       
case 'V':save(head);
        break;
case 't':
case 'T':z:
        printf("\n  1) FOR SORT BY NAME\n\n  2) FOR SORT BY PERCENTAGE\n\n");
        scanf("%d",&e);
        if(e==1)
        sort_name(head);
        else if(e==2)
        sort_percentage(head);
        else
        {
        printf("\n\n*****INAVID OPTION TRY AGAIN*****\n\n");
        goto z;
        }
        break;
case 'r':
case 'R':reverse(&head);
        break;
case 'e':
case 'E':u:
        printf("\n  1) FOR SAVE AND EXIT\n  2) FOR EXIT WITHOUT SAVE\n");
        scanf("%d",&e);
        if(e==1)
        {
        save(head);
        return 0;
        }
        else if(e==2)  
        return 0;
        else
        {
        printf("\n\n*****INVALID OPTION TRY AGAIN*****\n\n");
        goto u;
        }
default : 
         printf("\n*****INVALID OPTION TRY AGAIN*****\n\n");
}
}
}



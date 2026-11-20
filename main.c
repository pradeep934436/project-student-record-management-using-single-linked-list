#include"student.h"
int main()
{
sll *head=0;
scan_file(&head);
int i,op,e;
while(1)
{
printf("\n*****ENTER YOUR OPTION*****\n");
printf("\n  1) FOR ADD A STUDENT RECORD\n  2) FOR VIEW THE RECORD\n  3) FOR DELETE A PARTICULAR RECORD\n  4) FOR DELETE ALL RECORD\n  5) FOR MODIFY A RECORD\n  6) SAVE THE RECORDS INTO student.dat FILE\n  7) FOR SORT THE RECORDS\n  8) REVERSE THE LINKS\n  9) FOR EXIT\n\n");
scanf("%d",&op);

switch(op)
{
case 1:add(&head);
       break;
case 2:show(head);
       break;
case 3:h:
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
case 4:del_all(&head);
       break;
case 5:t:
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
       
case 6:save(head);
       break;
case 7:z:
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
case 8:reverse(&head);
       break;
case 9:u:
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
default : printf("\n*****INVALID OPTION TRY AGAIN*****\n\n");
}
}
}








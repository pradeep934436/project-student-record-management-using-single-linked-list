#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}sll;

void add (sll **);
void del_rollno(sll **);
void del_name(sll **);
void show(sll *);
int count(sll *);
void del_all(sll **);
void search_rollno(sll *);
void search_name(sll *);
void search_percentage(sll *);
void save(sll *);
void sort_name(sll *);
void sort_percentage(sll *);
void reverse(sll **);
void scan_file(sll**);
int my_strlen(char *);



#include<stdio.h>
#include<stdlib.h>
struct book
{char name[20];
 int a;
 float w;
 char g;
 };
 int main()
 {struct book *bookPtr,book1;
 int i,n;
 printf("enter number of books: ");
 scanf("%d",&n);
 bookPtr=(struct book*)malloc(n*sizeof(struct book*));
 for(i=0;i<n;i++)
 {printf("enter name: ");
 scanf("%s",&(bookPtr+i)->name);
 printf("enter bookcode: ");
 scanf("%d",&(bookPtr+i)->a);
 printf("enter prize of book: ");
 scanf("%f",&(bookPtr+i)->w);
 fflush(stdin);
 printf("enter author name: ");
 scanf("%c",&(bookPtr+i)->g);
 }
 for(i=0;i<n;i++)
 {
 printf("displaying:\n");
 printf("name:%s\n",(bookPtr+i)->name);
 printf("bookcode:%d\n",(bookPtr+i)->a);
 printf("prize:%f\n",(bookPtr+i)->w);
 printf("author name:%c\n",(bookPtr+i)->g);
 }
 return 0;
 }



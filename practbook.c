#include<stdio.h>
#include<stdlib.h>
struct book{
char name[20];
char a[10];
int bn;
};
int main()
{
struct book book1;
int a,b;
printf("enter number of books: ");
scanf("%d",&b);
struct book *p;
p=(struct book*)malloc(b*sizeof(struct book*));
for(a=0;a<b;a++){
        fflush(stdin);
printf("\n\tenter book name: ");
scanf("%c",&(p+a)->name);
fflush(stdin);
printf("\n\tenter author name: ");
scanf("%c",&(p+a)->a);
fflush(stdin);
printf("\n\tenter book id: ");
scanf("%d",&(p+a)->bn);
}
for(a=0;a<b;a++){
printf("***ouput***");
printf("\nenter book name:%c",p->name);
printf("\nenter author name:%c",p->a);
printf("\nenter book id:%d",p->bn);
}
return 0;
}

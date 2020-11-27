#include<stdio.h>

void main()
{
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
int choice=1;

head=0;

while(choice==1)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter Data");
scanf("%d",&newnode->data);
newnode->next=0;


if (head==0)
{
    head=temp=newnode;
}
else
{
    temp->next=newnode;
    temp=newnode;
}

printf("To insert press 1 else ");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
getch();
}

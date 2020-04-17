#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head;
struct node *temp;
void a()
{
    head=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int n,i;
    head->data=1;
    printf("enter no of nodes");
    scanf("%d",&n);
    printf("enter data");
    for(i=0;i<n;i++)
    {
    struct node *new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(new->data));
    temp->link=new;
    temp=temp->link;
    }
    temp->link=NULL;
}
void b()
{
    int data;
    struct node *temp1;
    printf("enter element to be deleted");
    scanf("%d",&data);
    temp=head;
    while(temp->data!=data)
    {
        temp1=temp;
        temp=temp->link;
    }
    temp1->link=temp->link;
    free(temp);
}
void c()
{

    head->data=1;
    temp=head;
    while(temp->link!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->link;
    }
    printf("\n%d",temp->data);
}
void main()
{
   a();
   b();
   c();
}

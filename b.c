
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *post;
};
struct node *head;
struct node *temp;
void a()
{
    int i,n;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->pre=NULL;
    temp=head;
    printf("enter no of nodes");
    scanf("%d",&n);
    printf("enter data");
    for(i=0;i<n;i++)
    {
    struct node *new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(new->data));
    new->post=NULL;
    new->pre=temp;
    temp->post=new;
    temp=temp->post;
    }

}
void b()
{
    int data;
    printf("enter element to be deleted");
    scanf("%d",&data);
    temp=head;
    struct node *temp1;
    while(temp->data!=data)
    {
        temp1=temp;
        temp=temp->post;
    }
    temp1->post=temp->post;

    free(temp);
}
void c()
{
     head->data=1;
    temp=head;
    while(temp->post!=NULL)
    {
        printf("\n%d",temp->data);
    temp=temp->post;
    }
    printf("\n%d",temp->data);
}
void main()
{
    a();
    b();
    c();
}

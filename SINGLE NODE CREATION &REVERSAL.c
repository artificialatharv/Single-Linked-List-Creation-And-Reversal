#include <stdio.h>
#include<stdlib.h>
struct node
{   int data;
    struct node *link;
};
struct node *newnode, *move,*temp, *head, *prev, *next, *current;
int a, i,j,k=2;
void display()
{   move=head;
    printf("Output :\n");
    while(move!=NULL)
    {   printf("%d\n",move->data);
        move = move->link;
    }
}
void create()
{   printf("Enter data for First node:\n");
    scanf("%d",&a);
    newnode=((struct node*)malloc(sizeof(struct node)));
    newnode->data=a;
    newnode->link=NULL;
    head=newnode;
    move=head;
    do
    {   printf("Do you want to create another node PRESS 1 Else 0\n");
        scanf("%d",&i);

        if(i==1)
        {
            j=0;
            printf("Enter data for node - %d:\n",k);
            scanf("%d",&j);
            newnode=((struct node*)malloc(sizeof(struct node)));
            newnode->data=j;
            newnode->link=NULL;
            move->link=newnode;
            move=move->link;
            k++;
        }
    } while(i==1);
}
void reversal()
{   printf("Reversal\t");
    prev=NULL;
    next=current=head;
    while(next!=NULL)
    {   next = next->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

int main() {
    printf("© @atharvv!\n");
    create();
    display();
    reversal();
    display();


    return 0;
}

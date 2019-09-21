/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 struct node
 {
   int info;
   struct node *link;
 }*root;
 void addlast()
 {
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
        
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
 }
 void delete()
 {
     int i,j=1;
     printf("enter the number of node to delete");
     scanf("%d",&i);
     {
         struct node *p;
         p=root;
         while(j<i)
         {
             p=p->link;
             j++;
         }
         struct node *temp;
         temp=p->link;
         p->link=temp->link;
     }
 }
 void display()
 {
     struct node *p;
     p=root;
     if(p==NULL)
     {
         printf("linked list is empty");
         
     }
     else
     {
         while(p->link!=NULL)
         {
             printf("%d\n",p->info);
             p=p->link;
         }
         printf("%d\n",p->info);
     }
 }
 void main()
 {
     int k;
     
     
     while(1)
     {
         printf("enter the number to perform\n1.ADDING\n2.DELETING\n3.DISPLAY\n4.EXIT\n");
         scanf("%d",&k);
     switch(k)
     {
         case 1: addlast();
                break;
         case 2: delete();
                break;
         case 3: display();
                break;
         case 4: exit(1);
                break;
         default:printf("enter the number between 1 to 4");        
     }
 }
}

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
     int len,i,j=1;
     len=length();
     printf("enter the number of node to delete");
     scanf("%d",&i);
     if(i>len)
     {
         printf("LIMIT EXCEEDS");
         
     }
     else
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
             printf("%d",p->info);
             p=p->link;
         }
         
     }
 }
 void main()
 {
     int k;
     printf("enter the number to perform\n1.ADDING\n2.DELETING\n3.DISPLAY\n");
     scanf("%d"&k);
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

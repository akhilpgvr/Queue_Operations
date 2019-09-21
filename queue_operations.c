#include<stdio.h>
int main()
{
 int op,num,i,front=-1,rear=-1,b[5],element,choice=1;
 printf("enter the size of queue");
 scanf("%d",&num);
 while(choice!=0)
 {
printf("enter 1 for entering an element and 2 for deleting an element\t");
 scanf("%d",&op);
  switch(op)
  {
   case 1 :if(rear>=num-1)
           {
            printf("queue overflow\n");
           }
           else
           {
           front=0;
	   rear+=1;
           printf("enter the element for adding\t");
           scanf("%d",&element);
           b[rear] = element;
           }
           printf("elements in stack are\t");
           for(i=0;i<=rear;i++)
           {
            printf("%d\t",b[i]);
	   }
           printf("\n");
           break;
   case 2 :if(rear == 0)
           {
            printf("queue underflow\n");
           }
           else
           {
            if(front == rear)
            {
             front = rear =0;
             printf("Element is deleted\tvalue of front = %d\n",front);
            }
            else
            {
            front=front+1;
            printf("Element is deleted\tvalue of front = %d\n",front);
            }
           }
 }
  printf("enter 1 to continue and 0 for exit\t");
  scanf("%d",&choice);
}
}


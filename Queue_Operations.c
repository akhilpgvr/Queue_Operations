/*This code is about the operations in the queue such as entering and deleting of elemnts of the queue.More details about queue is in the README.md file

For a Queue there will be 2 elements for positions(front and rear).
This is because insertion of element in to queue is from last position and deletion is from last position*/


#include<stdio.h>
int main()
{
 int op,num,i,front=-1,rear=-1,b[5],element,choice=1;    //initializing of front and rear
 printf("enter the size of queue");
 scanf("%d",&num);
 while(choice!=0)                   //Condition for repeating the loop
 {
printf("enter 1 for entering an element and 2 for deleting an element\t");
 scanf("%d",&op);
  switch(op)
  {
   case 1 :if(rear>=num-1)          //Cheaking the queue is full
           {
            printf("queue overflow\n");
           }
           else
           {
           front=0;           //Incrementing value of front by 1 and rear is incremented for how many times we enter elements
	         rear+=1;
           printf("enter the element for adding\t");
           scanf("%d",&element);
           b[rear] = element;        //Element is entered in to the postion of rear
           }
           printf("elements in stack are\t");
           for(i=0;i<=rear;i++)
           {
            printf("%d\t",b[i]);
	   }
           printf("\n");
           break;
   case 2 :if(front>rear)         //Checking is the queue is NULL or NOT
           {
            printf("queue underflow\n");
           }
           else
           {
            front=front+1;           //Incrementing value of front for deleting the element
            printf("Element is deleted\tvalue of front = %d\n",front);
           }
 }
  printf("enter 1 to continue and 0 for exit\t");
  scanf("%d",&choice);
}
}


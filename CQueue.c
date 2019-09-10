//This program is about operations of circular Queue.


#include<stdio.h>
int main()
{
 int c[10],num,front=0,rear=0,i,j,choice=1,op,item;
 printf("enter the number of elments of CQueue\t");
 scanf("%d",&num);                  //Entering number of elements of Circular Queue 
 while(choice=1)              
 {
  printf("enter 1 for insering and 2 for deleting\t");      //Choosing operation
  scanf("%d",&op);
  switch(op)            //Entering to operation
  {   
   case 1: if(front == (rear % num)+1)                  //Checking wheather the queue is full or not
           {
            printf("CQ is full\n");
           }
           else if(front == 0)          //If the Queue is empty ,increment the values of front and rear by 1
           {
            front = 1;rear = 1;
            printf("enter the number to add\t");
	    scanf("%d",&item);
            c[rear] = item;
            break;
           }
           else               //If the Queue is not full ,incrment rear  [using rear = (rear % num)+1] and insert the element to rear
           {
            printf("enter the number for adding\t");
            scanf("%d",&item);
            rear = (rear % num)+1;
            c[rear] = item;
           }
           break;
   case 2: if(front == 0)    //Checking wheather the Queue is empty or not
           {
            printf("Circular Queue is empty\n");
           }
           else     //If the rear is equal to front ,the queue will be empty,therefore :rear=0 and front = 0
           {
            if(front == rear)
            {
             front = rear = 0;    
            }
            else          //If the queue is not empty increment front by front =(front % num)+1
            {
             front=(front % num)+1;
             printf("element is deleted and the value of front is %d\n",front);
            }
           }
   }
  printf("enter 1 for continue and zero for exit\t");
  scanf("%d",&choice);
 }
}

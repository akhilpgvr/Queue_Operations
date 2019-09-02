# Queue_Operations
what is Queue and what are the operations in queue



What is Queue?

    • Queue is a linear data structure where the first element is inserted from one end called REAR and deleted from the other end called as FRONT.
    
    • Front points to the beginning of the queue and Rear points to the end of the queue.
    
    • Queue follows the FIFO (First - In - First Out) structure.
    
    • According to its FIFO structure, element inserted first will also be removed first.
    
    • In a queue, one end is always used to insert data (enqueue) and the other is used to delete data (dequeue), because queue is open at both its ends.
    
    • The enqueue() and dequeue() are two important functions used in a queue.
    

Operations on Queue

Following are the basic operations performed on a Queue.

Operations

Description

enqueue()

This function defines the operation for adding an element into queue.

dequeue()

This function defines the operation for removing an element from queue.

init()

This function is used for initializing the queue.

Front

Front is used to get the front data item from a queue.

Rear

Rear is used to get the last item from a queue.

Queue Implementation

    • Array is the easiest way to implement a queue. Queue can be also implemented using Linked List or Stack.
    

    • In the above diagram, Front and Rear of the queue point at the first index of the array. (Array index starts from 0).
    
    • While adding an element into the queue, the Rear keeps on moving ahead and always points to the position where the next element will be inserted. Front remains at the first index.
    

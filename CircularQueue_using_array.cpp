#include<iostream>

using namespace std;

struct Queue
{
	//initialize front and rear
	int rear,front;
	
	//circular Queue
	int size;
	int *arr;	
	
	Queue(int s)
	{
		front = rear = -1;
		size = s;
		arr = new int[s];
	}
	 
	 void enQueue(int value);
	 int deQueue();
	 void displayQueue();
};

//function to create circular queue
void Queue :: enQueue(int value)
{
	if((front==0 && rear==size-1)||
			(rear==(front-1)%(size-1)))  //if queue is full
	{
		cout<<"\nQueue is full";
		return;
	}
	
	else if(front == -1)  //if queue is empty and insertion takes place at 1st position
	{
		front = rear = 0;
		arr[rear] = value;
	}
	
	else if(rear == size-1 && front != 0)  //circular insertion start case
	{
		rear = 0;
		arr[rear] = value;
	}
	
	else
	{
		rear++;
		arr[rear] = value;
	}
}


int Queue :: deQueue()
{
	if(front ==  -1)  //empty queue
	{
		cout<<"\nQueue is empty";
		return INT_MIN;
	}
	
	int data = arr[front];
	arr[front] = -1;
	if(front == rear)  //only one element left
	{
		front = -1;
		rear = -1;
	}
	else if(front == size-1) //circular queue deletion start
		front =0;
	else
		front++;
		
	return data;	
}

//function for displaying elements of circular queue

void Queue :: displayQueue()
{
	if(front == -1)
	{
		cout<<"\nQueue is empty";
		return;
	}
	
	cout<<"\nElements in circular queue are : ";
	if(rear>=front)
	{
		for(int i=front;i<=rear;i++)
			cout<<arr[i]<<" ";
	}	
	else
	{
		for(int i = front;i<size;i++)
			cout<<arr[i]<<" ";
		for(int i=0;i<=rear;i++)
			cout<<arr[i]<<" ";
			//cout<<cout<<arr[i]<<" ";   ------>IMPORTANT POINT(POINTED OUT BY PERFORMING A MISTAKLE) THIS WILL GIVE ADDRESS OF THE ARRAY ELEMENTS.
	}

}

/*void Queue::displayQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}*/


int main()
{
	Queue q(5);
	
	q.enQueue(14);
	q.enQueue(22);
	q.enQueue(13);
	q.enQueue(-6);
	
	q.displayQueue();
	
	//deleting elements from queue
	cout<<"\nDeleted value = "<<q.deQueue();
	cout<<"\nDeleted value = "<<q.deQueue();
	
	q.displayQueue();
	q.enQueue(9);
	q.enQueue(20);
	q.enQueue(5);
	
	q.displayQueue();
	
	q.enQueue(20);
	q.displayQueue();
	
	return 0;
}

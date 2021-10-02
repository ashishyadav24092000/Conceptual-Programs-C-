#include<iostream>
using namespace std;

struct Queue
{
//INITIALIZE FRONT AND REAR
	int rear,front;
	
//CIRCULAR QUEUE
	int size;
	int *arr;
	
	Queue(int s)
	{
		front = -1;
		rear = -1;
		size = s;
		arr = new int[s];
	}
	
	void enQueue(int value);
	void displayQueue();
};

void Queue :: enQueue(int value)
{
	if((front==0 && rear==size-1) ||
		(rear==(front-1)%(size-1)))
	{
		cout<<"\nQueue is full\n";
		return;
	}
	
	else if(front == -1)
	{
		front=rear = 0;
		arr[rear] = value;
	}
	
	else if(rear==size-1 && front!=0)
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

void Queue :: displayQueue()
{
	if(front == -1)
	{
		cout<<"\nQueue is empty\n";	
		return;
	}	
	
	cout<<"\nElements in Circular Queue are :: ";
	if(rear >= front)
	{
		for(int i=front;i<=rear;i++)
			cout<<arr[i]<<" ";
	}
	else
	{
		for(int i=front;i<=size-1;i++)
			cout<<arr[i]<<" ";
		for(int i=0;i<=rear;i++)
			cout<<arr[i]<<" ";
	}
} 

int main()
{
	Queue q(5);
	
	q.enQueue(14);
	q.enQueue(22);
	q.enQueue(13);
	q.enQueue(-6);
	
	q.displayQueue();
	
	return 0;
}

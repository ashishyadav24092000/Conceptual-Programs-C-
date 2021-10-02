#include<iostream>

using  namespace std;

//A structure to represent a queue
class Queue{
	public:
		int front,rear,size;
		unsigned capacity;
		int* array;
};

//FUNCTION TO CREATE A QUEUE OF GIVEN CAPACITY. IT INITIALIZES SIZE OF QUEUE AS 0
Queue* createQueue(unsigned capacity)
{
	Queue* queue = new Queue();
	queue->capacity = capacity;
	queue->front =0;
	queue->size = 0;
	
	//THIS IS IMPORTANT SEE THE ENQUEUE
	queue->rear = capacity-1;
	queue->array = new int[queue->capacity];
	return queue;
}

//Queue is said to be full when size becomes equal to the capacity
int isfull(Queue* queue)
{
	return(queue->size == queue->capacity);
}

//Queue isempty when size is 0
int isEmpty(Queue* queue)
{
	return(queue->size==0);
}

void enqueue(Queue* queue,int data)
{
	if(isfull(queue))
		return;
	queue->rear = (queue->rear+1)%queue->capacity;	
	queue->array[queue->rear] = data;
	queue->size =  (queue->size)+1;
	cout<<data<<" Enqueued to the queue\n";
}

int dequeue(Queue* queue)
{
	if(isEmpty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front+1)%queue->capacity;
	queue->size = (queue->size)-1;
	return  item;
}

int front(Queue* queue)
{
	if(isEmpty(queue))
		return INT_MIN;
	return(queue->array[queue->front]);
}

int rear(Queue* queue)
{
	if(isfull)
		return INT_MIN;
	return(queue->array[queue->rear]);
}

int main()
{
	Queue* queue = createQueue(1000);
	enqueue(queue,10);
	enqueue(queue,20);
	enqueue(queue,30);
	enqueue(queue,40);
	
/*	for(int i = queue->front;i!= queue->rear;(i+1)%queue->capacity)
	{
		cout<<queue->array[i]<< " ";
	}
*/
	cout<<"\nfront = "<<queue->front;
	cout<<"\nrear = "<<queue->rear;
	cout<<"\nPresently the Elements of the queue are :: ";
	int i = queue->front;
	while(i != queue->rear+1)
	{
		cout<<queue->array[i]<<" ";
		i = (i+1)%queue->capacity;
	}
	
	cout<<"\n"<<dequeue(queue)<<" dequeud from queue\n";
	cout<<"\nfront = "<<queue->front;
	cout<<"\nrear = "<<queue->rear;
	cout<<"\nPresently the Elements of the queue are :: ";
	i = queue->front;
	while(i != queue->rear+1)
	{
		cout<<queue->array[i]<<" ";
		i = (i+1)%queue->capacity;
	}
}

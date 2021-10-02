#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* link;
};
struct Queue
{
	Node *front, *rear;
};

//Function to create circular Queue
void enQueue(Queue* q,int value)
{
	Node *temp = new Node;
	temp->data = value;
	if(q->front == NULL)
		q->front = temp;
	else
		q->rear->link = temp;
		
	q->rear = temp;
	q->rear->link = q->front;
}

//Function to delete element from circular queue
int dequeue(Queue *q)
{
	if(q->front == NULL)
	{
		cout<"\nQueue is empty\n";
		return INT_MIN;
	}
	
	//IF THIS IS THE LAST NODE TO BE DELETED
	int value;
	if(q->front == q->rear)
	{
		value = q->front->data;
		delete(q->front);
		q->front = NULL;
		q->rear = NULL;
	}
	
	else
	{
		Node* temp = q->front;
		value  = temp->data;
		q->front = q->front->link;
		q->rear->link = q->front;
		
		delete(temp);
	}
	
	return value;
}

//Function displaying elements of circular Queue
void displayQueue(Queue *q)
{
	Node* temp = q->front;
	cout<<"\nElements of the Queue are:: ";
	while(temp->link != q->front)
	{
		cout<<temp->data<<"  ";
		temp = temp->link;
	}
	cout<<temp->data<<"  ";
	
}


int main()
{
	Queue *q = new Queue;
	q->front = q->rear = NULL;
	
	enQueue(q,14);
	enQueue(q,22);
	enQueue(q,6);
	displayQueue(q);
	
	cout<<"\nDeleted value:: "<<dequeue(q);
	cout<<"\nDeleted value:: "<<dequeue(q);
	
	displayQueue(q);
	enQueue(q,9);
	enQueue(q,20);
	displayQueue(q);

	return 0;
}

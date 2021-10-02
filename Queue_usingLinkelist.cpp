#include<iostream>

using namespace std;

struct Qnode{
	int data;
	Qnode* next;
	Qnode(int item)
	{
		data = item;
		next = NULL;
	}
};

struct Queue
{
	Qnode* front;
	Qnode* rear;
	Queue()
	{
		front = rear = NULL;
	}
	
	void enqueue(int x)
	{
		//create a new LL node
		Qnode *temp = new Qnode(x);
		
		//if queue is empty then newnode is front and rear both
		if(rear == NULL)
		{
			front = rear = temp;
			return;
		}
		
		//add the new node at the end of LL queue and change rear
		rear->next = temp;
		rear = temp;
	}
	
	void dequeue()
	{
		//Queue is empty return null
		if(front == NULL)
			return;
		
		Qnode* temp = front;
		front = front->next;
		
		if(front == NULL)
			rear == NULL;
			
		delete(temp);
	}
};

int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(32);
	q.enqueue(31);
	q.enqueue(34);
	Qnode* point;
	point = q.front;
	cout<<endl;
	while(point != q.rear->next)
	{
		cout<<point->data<<"  "<<point->next<<"----->";
		point = point->next;
	}
	q.dequeue();
	q.dequeue();
}

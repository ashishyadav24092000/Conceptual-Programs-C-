#include<iostream>
using namespace std;

#define MAX 1000

class Stack
{
	int top;
	
	public:
		int a[MAX];       //Maximum size of stack
		
		Stack()           //constructor to initialise "top"
		{
			top = -1;
		}
		
		bool push(int x);
		int pop();
		int peek();
		bool isEmpty();	
};

bool Stack::push(int x)
{
	if(top >= (MAX-1))
	{
		cout<<"Stack Overflow";
		return false;
	}
	else
	{
		a[++top] = x;
		cout<<x<<" pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if(top < 0)
	{
		cout<<"\nStack underflow\n";
		return 0;
	}
	else
	{
		int x = a[top--];
		return x; 
	}
}

int Stack::peek()
{
	if(top<0)
	{
		cout<<"\nStack is empty\n";
		return 0;
	}
	else
	{
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top<0);
}

int main()
{
	Stack s;
	
	s.push(23);
	s.push(24);
	s.push(25);
	s.push(26);
	
	cout<<s.pop()<<" popped from stack\n";
	
	cout<<"\nElements present in stack are : ";
	while(!(s.isEmpty()))
	{
		cout<<s.peek();
		s.pop();
	}
	return 0;
}

#include<iostream>

using namespace std;

class StackNode
{
	public:
		int data;
		StackNode* next;
};

StackNode* newnode(int data)
{
	StackNode* stacknode =  new StackNode();
	stacknode->data = data;
	stacknode->next = NULL;
	return stacknode;
}

int isEmpty(StackNode *root)
{
	return !root;
}

void push(StackNode** root,int data)
{
	StackNode* stacknode = newnode(data);
	stacknode->next = *root;
	*root = stacknode;
	cout<<data<<" pushed to stack\n";	
}

int pop(StackNode** root)
{
	if(isEmpty(*root))
 	    return INT_MIN;
 	    
	StackNode* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	free(temp);
	
	return popped;
}

int peek(StackNode* root)
{
	if(isEmpty(root))
  	    return INT_MIN;
  	return root->data;
}

int main()
{
	StackNode* root = NULL;
	push(&root,10);
	push(&root,20);
	push(&root,30);
	
	cout<<pop(&root)<<"  ppopped from stack\n";
	cout<<"top element is : "<<peek(root)<<endl;
	
	cout<<"\nElements present in the stack are : ";
	while(!isEmpty(root))
	{
		cout<<peek(root)<<" ";
		pop(&root);
	}
	return 0;
}

#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* GetNewNode(int data)
{
	Node* newnode = new Node();
	newnode->data = data;
	newnode->next = NULL;
	
	return newnode;
}
void create_linkedl(Node** head,int data)
{
	Node* element = GetNewNode(data);
	element->next = *head;
	*head = element;
}

bool Search_linkedl(Node* head,int x)
{
	Node* current = head;
	while(current->next != NULL)
		{
			if(current->data == x)
				return true;
			current = current->next;
		}
		return false;
}

int main()
{
	Node* head = NULL;
	int search = 21;
	
	create_linkedl(&head,10);
	create_linkedl(&head,15);
	create_linkedl(&head,12);
	create_linkedl(&head,19);
	create_linkedl(&head,21);
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"  "<<temp->next<<"-----> ";
		temp = temp->next;
	}
	
	Search_linkedl(head,212) ? cout<<"FOUND YEAH!!" : cout<<"NOT FOUND";
	return 0;
}

//middle element in a linked list
// 12345==3
//1234==3
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
node* getnode(int data)
{
	node* newnode=new node();
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

node* insertnode(node* head, int data)
{
	if(!head)
	{	head=getnode(data);}
	else
	{
		node* temp=head;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=getnode(data);
	}
	return head;
}

void printnodes(node* head)
{
	node* temp=head;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int midvalue(node* head)
{
	node* half=head;
	node* full=head;
	while(full)
	{	
		if(!full->next)
			break;
		else
			full=full->next->next;
		half=half->next;
	}
	return half->data;

}

int main()
{
	node* head=NULL;
	head=insertnode(head,1);
	insertnode(head,2);
	insertnode(head,3);
	insertnode(head,4);
	insertnode(head,5);
	printnodes(head);
	cout<<" The mid value of the linkedlist is "<<midvalue(head);
	return 0;
}
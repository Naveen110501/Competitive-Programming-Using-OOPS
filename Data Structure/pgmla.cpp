#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
int data;
struct node *next;	
}*start,*newnode,*first;
class nav
{
	public :
		int n,i;
		void creatingnode()
		{
		cout<<"enter the number of nodes"<<endl;
		cin>>n;
		first=(struct node*)malloc(sizeof(struct node));
		first->next=NULL;
		cout<<"enter the values for the nodes"<<endl;
		cin>>first->data;
		start=first;
		for(i=1;i<n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			cin>>newnode->data;
			newnode->next=NULL;
			start->next=newnode;
			start=start->next;
		}

		start=first;
	}
	void printnode()
	{
	//start=first;
	while(start!=NULL)
{
 cout<<start->data<<"->";
 start=start->next; 
}	
	
}	
};
	int main()
	{
		nav a;
		a.creatingnode();
		a.printnode();
		return 0;
		
	}

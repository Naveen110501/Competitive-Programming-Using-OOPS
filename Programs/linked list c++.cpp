#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
int data;
struct node *next;	
}*start,*newnode,*first,*temp;
class nav
{
	private :
		int n,i;
		public :
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
		cout<<"final list"<<endl;
	start=first;
	while(start!=NULL)
{
 cout<<start->data<<endl;
 start=start->next; 
}		
}
void insert_at_beginning()
{
	cout<<"enter the value for inserting"<<endl;
	newnode=(struct node*)malloc(sizeof(struct node));
	cin>>newnode->data;
	newnode->next=first;
	first=newnode;
}
void insert_at_end()
{
	cout<<"enter the value for inserting"<<endl;
	newnode=(struct node*)malloc(sizeof(struct node));
	cin>>newnode->data;
	newnode->next=NULL;
	start=first;
	while(start->next!=NULL)
	{
	start=start->next;
}
start->next=newnode;
}
void insert_at_middle()
{
	int count=0,count1=0;
	start=first;
	while(start!=NULL)
	{
		start=start->next;
		++count;
	}
	start=first;
	count=count/2;
	while(count1!=count)
	{
		start=start->next;
		count1=++count1;
	}
    cout<<"enter the value for inserting";
	newnode=(struct node*)malloc(sizeof(struct node));
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->next=start->next;
	start->next=newnode;	
}
void delete_at_end()
{
		start=first;
        int count=0,count1=0;
	while(start!=NULL)
	{
		start=start->next;
		++count;
	}
	start=first;
		while(start!=NULL&&count1!=count-2)
	{
		start=start->next;
		++count1;
	}
	start->next=NULL;
}
void delete_at_beginning()
{
	temp=first;
	first=first->next;
    free(temp);
}
void delete_at_middle()
{
		int count=0,count1=0;
		start=first;
		while(start!=NULL)
	{
		start=start->next;
		++count;
	}
	count=count/2;
	start=first;
	while(count1!=count-1)
	{
		start=start->next;
		count1=++count1;
	}
	printf("\ncount=%d\n",count1);
	temp=start->next;
	start->next=temp->next;
	free(temp);
	
}	
};
	int main()
	{
		int x;
		nav a;
		a.creatingnode();
		A:
	cout<<"\nenter\n1 to insert at begining,\n2 for insert at middle,\n3 for insert at end,\n4  for delete  at first,\n5 for delete at middle,\n6 for delete at end,\n7for display output,\n 8for exit\n";
	cin>>x;
	switch(x)
	{
	case 1:
	a.insert_at_beginning();
	goto A;
    case 2:
    a.insert_at_middle();
    goto A;
	case 3:
	a.insert_at_end();
	goto A;
    case 4:
    a.delete_at_beginning();
    goto A;
    case 5:
   a.delete_at_middle();
   goto A;
    case 6:
    a.delete_at_end();
    goto A;
    case 7:
    a.printnode();
    goto A;
}
		return 0;
		
	}

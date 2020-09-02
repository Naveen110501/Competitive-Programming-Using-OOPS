
#include<iostream>
#include<cstdlib>
using namespace std;
class node 
{
	int data;
	node *next;
	public:
		node()
		{
			data=0;
			next = NULL;
		}
		node *insert(node *);
		void display(node *);
		void insert_at_end(node *);
		void insert_at_middle(node *head);
		node* insert_at_beginning(node *);
		void delete_at_end(node *head);
		node *delete_at_beginning(node *head);
		void delete_at_middle(node *head);
};
void node::display(node *run)
{
	int ct=0;
	while(run!=NULL)
	{
		cout<<run->data<<"->"<<" ";
		run=run->next;
		ct++;
	}
}

node* node::insert(node *head)
{
	cout<<"\nENTER THE NODE VALUE:";
	node* temp;
	temp=new node;
	cin>>temp->data;
	if (head==NULL)
	{
		head=temp;
		return head;
	}
	else 
	{
		node *temp2;
		temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp;
		return head;
	}
}	
node* node :: insert_at_beginning(node *head)
{
	node *newnode;
	newnode=new node;
	cout<<"enter the value for inserting"<<endl;
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
	return(head);
}		
void node :: insert_at_end(node *head)
{
	node *newnode,*start;
	cout<<"enter the value for inserting"<<endl;
	newnode=new node;
	cin>>newnode->data;
	newnode->next=NULL;
	start=head;
	while(start->next!=NULL)
	{
	start=start->next;
}
start->next=newnode;
}
void node :: insert_at_middle(node *head)
{
	node *start,*newnode;
	int count=0,count1=0;
	start=head;
	while(start!=NULL)
	{
		start=start->next;
		++count;
	}
	start=head;
	count=count/2;
	while(count1!=count)
	{
		start=start->next;
		count1=++count1;
	}
    cout<<"enter the value for inserting";
	newnode=new node;
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->next=start->next;
	start->next=newnode;	
}
void node :: delete_at_end(node *head)
{
	node *start;
		start=head;
        int count=0,count1=0;
	while(start!=NULL)
	{
		start=start->next;
		++count;
	}
	start=head;
		while(start!=NULL&&count1!=count-2)
	{
		start=start->next;
		++count1;
	}
	start->next=NULL;
}
node* node :: delete_at_beginning(node *head)
{
	node *temp;
	temp=head;
	head=head->next;
    free(temp);
    return head;
}
void node :: delete_at_middle(node* head)
{
	node *start,*temp;
		int count=0,count1=0;
		start=head;
		while(start!=NULL)
	{
		start=start->next;
		++count;
	}
	count=count/2;
	start=head;
	while(count1!=count-1)
	{
		start=start->next;
		count1=++count1;
	}
	temp=start->next;
	start->next=temp->next;
	free(temp);	
}								
int main()
{
	node *head;
	head=new node;
	int n;
	cout<<"ENTER THE NUMBER OF NODES:";
	cin>>n;
	head=NULL;
	while(n--)
	{
	  head=head->insert(head);
	}	
	node *run;
	run = head;
	head=head->insert_at_beginning(head);
	head->insert_at_end(head);
	head->insert_at_middle(head);
	head->delete_at_end(head);
	head=head->delete_at_beginning(head);
	head->delete_at_middle(head);
	cout<<"\n DISPLAYING:\n";
	head->display(head);
	return 0;
}


#include<iostream>
using namespace std;
class nav
{
	public :
		int stack[100],top,n;
	nav()
	{
		top=-1;
		cout<<"enter the size of stack"<<endl;
		cin>>n;
	}
	void push()
	{
		if(top==n-1)
		{
			cout<<"stack is overflow"<<endl;
		}
		else
		{
			int value;
			cout<<"enter the value to be push"<<endl;
			cin>>value;
			stack[++top]=value;
		}
	}
		void pop()
		{
			if(top==-1)
			{
				cout<<"stack is underflow";
			}
			else
			{
				stack[--top];
				cout<<"pop operation is successful"<<endl;
			}
		}
		void peek()
		{
			cout<<"at the top of stack"<<endl<<stack[top];
		}
		void display()
		{
			cout<<"final stack"<<endl;
			for(int i=0;i<=top;i++)
			{
				cout<<stack[i]<<endl;
			}
		}
	};
	int main()
	{
		int choice;
	nav a;
	A:
	cout<<"enter \n1.push\n2.pop\n3.peek\n4.display\n5.exit\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			a.push();
			goto A;
			break;
			case 2:
				a.pop();
				goto A;
				break;
		case 3:
		       a.peek();
		       goto A;
		       break;
		       case 4:
		       	a.display();
		       	goto A;
		       	break;
		       	case 5:
		       		break;
		   }
		       return 0;
	
}

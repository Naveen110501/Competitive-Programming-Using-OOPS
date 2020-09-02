
#include<iostream>
using namespace std;
class vehicle
{
	public:
virtual	void message(){
		cout<<"The message about the vehicle is printed\n";
	}
virtual	void fare()
	{
		cout<<"The fare of the respective vehicle will be printed\n";
	}
};
class bus : public vehicle
{
	public:
	void message()
	{
		cout<<"the vehicle with more than four wheels \n";
	}
	void fare()
	{ int n1,fb,a1=50;
	cout<<"enter the number of passengers amount per person\n";
	cin>>n1;
	fb=n1*a1;
	cout<<"total fare="<<fb<<endl;
}
};
class car : public vehicle
{
	public:
	void message()
	{
		cout<<"the vehicle with exactly four wheels \n";
	}
	void fare()
	{ int n2,fc,a2=80;
	cout<<"enter the number of passengers amount per person\n";
	cin>>n2;
	fc=n2*a2;
	cout<<"total fare="<<fc<<endl;
}
};
class boat : public vehicle
{
	public:
	void message()
	{
		cout<<"the vehicle used to travel in sea\n";
	}
	void fare()
	{ int n3,fbt,a3=100;
	cout<<"enter the number of passengers amount per person\n";
	cin>>n3;
	fbt=n3*a3;
	cout<<"total fare="<<fbt<<endl;
}
};
int main()
{
	/*vehicle v;
	bus b;
	v.message();
	b.message();
	v.fare();
	b.fare();
	car c;
	c.message();
	c.fare();
	boat bt;
	bt.message();
	bt.fare();
	return 0;*/
	vehicle *v;
	bus b;
	v=&b;
	return 0;
}

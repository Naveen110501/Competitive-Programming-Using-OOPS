#include<iostream>
using namespace std;
class a
{
	public :
		int c;
		void tea(int a)
		{
			cout<<a<<endl;
		}
		int tea(int a)
		{
			cout<<a<<endl;
			return a;
		}
};
int main()
{
	int c;
	a q;
	q.tea(20);
	c=q.tea(10);
    cout<<c;	
}

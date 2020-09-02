#include<iostream>
using namespace std;
class nav
{
	public :
		int a,i,expect_amount,amount[100];
		int total;
		nav()
		{
			total=0;
		}
		void cal()
		{
			cin>>a;
			cin>>expect_amount;
			for(i=0;i<a;i++)
			{
				cin>>amount[i];
				total=total+amount[i];
			}
            if(total>expect_amount)
			{
				total=total-expect_amount;
				cout<<total;
				}	
				else
				cout<<0;
		}
		
};
int main()
{
	nav n;
	n.cal();
	return 0;

}

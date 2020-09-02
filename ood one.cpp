#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class nav
{
	public :
		int b[1000],count,i,j,n;
		nav()
		{
			count=0;
		}
		void cal()
		{
			cin>>n;
			for(i=0;i<n;i++)
			{
				cin>>b[i];		
				}
				sort(b,b+n);
				for(i=0;i<n;i++)
				{
					count=0;
					if(b[i]==b[i+1])
					{
					count++;
					continue;
					
					if(count%2!=0)
					cout<<b[i];
					break;
					}	
				
		}
	}
};
int main()
{
    nav m;
    m.cal();
    return 0;
}

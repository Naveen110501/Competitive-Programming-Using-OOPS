#include<iostream>
using namespace std;
class vowel
{
	public:
		int a,count;
		char b[100];
		voewl()
		{
			count=0;
		}
		void cal()
		{
			cin>>a;
			cout<<"\n";
			for(int i=0;i<a;i++)
			{
				cin>>b;
			}
			for(int i=0;i<a;i++)
			{
				if(b[i]=='a'||b[i]=='A'||b[i]=='e'||b[i]=='E'||b[i]=='i'||b[i]=='I'||b[i]=='o'||b[i]=='O'||b[i]=='u'||b[i]=='U')
			count++;
			}
			cout<<count;
		}
		
};
int main()
{
	vowel m;
	m.cal();
	return 0;
}


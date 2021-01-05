#include<iostream>
using namespace std;
template <> 
void jun<int>( int a)
{
	cout<<a<<endl;
}
template <class T> void jun(T x)
{
	cout<<x<<endl;

}
int main()
{
	jun(10);
//	jun(1.1);
//	jun('a');
	return 0;
}

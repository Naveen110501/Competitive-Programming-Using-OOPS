#include<iostream>
using namespace std;
void nav(int x,float y)
{
try
{
if(y==0)
throw y;
else
cout<<"the value is "<<x/y;
}
catch(float m)
{
cout<<"the diviser value should not be zero\n";

}
}
int main()
{
int a;
float b,c;
cout<<"enter the two numbers\n";
cin>>a>>b;
nav(a,b);
return 0;
}


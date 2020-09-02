#include<iostream>
using namespace std;
class complex
{
public :
float real,imaginary;
complex(float m,float n)
{
real=m;
imaginary=n;
}
bool operator >(complex &nav)
{
if(real>nav.real)
{
return true;
}
else
{
return false;
}

}

};
int main()
{
float b,c,d,e;
int choice;
char choice1;
cout<<"enter real and imaginary part"<<endl;
cin>>b>>c;
cout<<"enter real and imaginary part"<<endl;
cin>>d>>e;
complex c1(b,c);
complex c2(d,e);
if(c1>c2)
{
cout<<"after comparison"<<endl;
cout<<c1.real<<"  of realpart value  is bigger than  "<<c2.real<<endl;
cout<<c1.real<<"+i"<<c1.imaginary<<" is larger"<<endl;
}
else
{
cout<<"after comparison"<<endl;
cout<<c2.real<<"  of realpart value is bigger than "<<c1.real<<endl;
cout<<c2.real<<"+i"<<c2.imaginary<<"is larger"<<endl;

}
return 0;
}

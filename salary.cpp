#include<iostream>
#include<cstdio>
using namespace std;
class nav
{
    public :
    int i,n,j,k;
    double salary[10000],total;
        nav()
        {
            total=0;
        }
    void cal()
        {
            cin>>i;
            
            for(j=0;j<i;j++)
            {
                cin>>n;
                total=0;
            for(k=0;k<n;k++)
            {
                cin>>salary[k];
                total=total+salary[k];
            }
            total=((total)*1.0)/n;
        printf("%0.2lf",total);
                
            }
        
    
    }
};
int main()
{
    nav m;
    m.cal();
    return 0;
}

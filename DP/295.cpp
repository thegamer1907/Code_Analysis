#include<iostream>
using namespace std;

int main()
{
    int n,m,c=0,x,y,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[j];
                a[j]=a[i];
                a[i]=x;
            }
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                x=b[j];
                b[j]=b[i];
                b[i]=x;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]=-1;
                break;
            }
             else if(a[i]==b[j]+1)
            {
                 c++;
                b[j]=-1;
                break;
            }
            else if(a[i]+1==b[j])
            {
                 c++;
                b[j]=-1;
                break;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

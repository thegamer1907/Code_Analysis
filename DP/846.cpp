#include<iostream>
using namespace std;
int main()
{
    int t,c=0,i,j=0,m=-1;;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            j++;
        }
    }
    if(j==t) cout<<t-1<<endl;
    else
    {
        for(i=0;i<t;i++)
        {
            if(a[i]==0)
            {
                c++;
                if(c>m) m=c;
            }
            if(a[i]==1 && c!=0)
            {
                c--;
            }
        }
        cout<<m+j<<endl;
    }
    return 0;
}

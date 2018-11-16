#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,j,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((b[j]-a[i])>1)
                break;
            else if((b[j]-a[i])==1||(b[j]-a[i])==0||(b[j]-a[i])==-1)
            {
                k++;
                b[j]=-200;
                break;
            }
            else
                continue;
        }
    }
    cout<<k;
    return 0;
}









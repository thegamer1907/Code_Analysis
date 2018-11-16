#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,m,p1,p2,h=0,c;
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

    i=0;
    j=0;

    while(i<n && j<m)
    {
        c=a[i]-b[j];
        if(c==-1 || c==0 || c==1)
        {
            h++;
            i++;
            j++;
        }
        else if(c<-1)
            i++;
        else if(c>1)
            j++;
    }

    cout<<h;

    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,nn,i,j,k;
    string a;
    cin>>n>>nn;
    cin>>a;
    k=a.length();
    for(j=1;j<=nn;j++)
    {
        for(i=1;i<n;++i)
        {
            if(a[i]=='G' && a[i-1]=='B')
                {
                    swap(a[i],a[i-1]);
                    ++i;
                }
            /*if(a[0]=='G')
                break;*/
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

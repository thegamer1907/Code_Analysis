#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    string a,b;
    cin>>n>>t;
    cin>>a;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
                {
                swap(a[j],a[j+1]);
                j++;
                }
        }
    }
    cout<<a<<endl;
    return 0;
}

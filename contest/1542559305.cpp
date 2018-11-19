#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100][100];
    int i,j,n;
    cin>>a;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>b[i];
    for(i=1;i<=n;i++)
    {
        int flag=0;
        if(b[i][0] == a[0] && b[i][1] == a[1])
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        if(flag==0)
        for(j=1;j<=n;j++)
        {
            if(b[i][1] == a[0] && b[j][0] == a[1])
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(j<=n)
            break;
    }
    if(i == n+1)
    {
        cout<<"NO"<<endl;
    }
}

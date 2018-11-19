#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n,k,x,y;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        x=0;
        for(int j=k-1;j>=0;j--)
        {
            scanf("%d",&y);
            x+=y<<j;
        }
        s.insert(x);
    }
    for(int b:s)
    {
        for(int c:s)
        {
            x=b&c;
            if(x==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

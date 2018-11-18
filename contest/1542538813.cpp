#include <bits/stdc++.h>

using namespace std;

int v[20001];

int main()
{
    int n,k,i,j,x,y,z,t,ok=0;
    cin>>n>>k;
    if (k==1)
        {
            for (i=1;i<=n;i++)
            {
                cin>>x;
                if (x==0)
                    ok=1;
            }
        }
    if (k==2)
        {
            for (i=1;i<=n;i++)
            {
                cin>>x>>y;
                int mark=x*10+y;
                v[mark]=1;
            }
            if (v[0]==1||(v[10]==1&&v[1]==1))
                ok=1;
        }
    if (k==3)
    {
        for (i=1;i<=n;i++)
        {
            cin>>x>>y>>z;
            int mark=x*100+y*10+z;
            v[mark]=1;
            v[mark+1]=1;
            v[mark+10]=1;
            v[mark+100]=1;
            v[mark+11]=1;
            v[mark+101]=1;
            v[mark+110]=1;
        }
        if (v[0]==1)
            ok=1;
        if (v[100]==1&&v[10]==1&&v[1]==1)
            ok=1;
        if (v[100]==1&&v[11]==1)
            ok=1;
        if (v[10]==1&&v[101]==1)
            ok=1;
        if (v[1]==1&&v[110]==1)
            ok=1;
    }
    if (k==4)
    {
        for (i=1;i<=n;i++)
        {
            cin>>x>>y>>z>>t;
            int mark=x*1000+y*100+z*10+t;
            v[mark]=1;
            v[mark+1]=1;
            v[mark+10]=1;
            v[mark+100]=1;
            v[mark+1000]=1;
            v[mark+11]=1;
            v[mark+101]=1;
            v[mark+110]=1;
            v[mark+1001]=1;
            v[mark+1010]=1;
            v[mark+1100]=1;
            v[mark+111]=1;
            v[mark+1011]=1;
            v[mark+1101]=1;
            v[mark+1100]=1;
        }
        if (v[0]==1)
            ok=1;
        if (v[1]==1&&v[1110]==1)
            ok=1;
        if (v[10]==1&&v[1101]==1)
            ok=1;
        if (v[100]==1&&v[1011]==1)
            ok=1;
        if (v[1000]==1&&v[111]==1)
            ok=1;
        if (v[11]==1&&v[1100]==1)
            ok=1;
        if (v[101]==1&&v[1010]==1)
            ok=1;
        if (v[110]==1&&v[1001]==1)
            ok=1;
        if (v[1001]==1&&v[110]==1)
            ok=1;
        if (v[1010]==1&&v[101]==1)
            ok=1;
        if (v[1100]==1&&v[11]==1)
            ok=1;
    }
    if (ok==1)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}

  	 	 	 	   		  			    		  			
#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n)
int main()
{
    int n,k,i,x,f,j,m;
    in(n),in(m);
    set<int> s;
    while(n--)
    {
        k=0;
        for(i=0;i<m;i++)
            in(x),k*=10,k+=x;
        s.insert(k);
    }
    vector<int> v(s.begin(),s.end());
    f=0,n=v.size();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=v[i]+v[j],k=1;
            while(x>0)
            {
                if(x%10==2)
                    k=0;
                x/=10;
            }
            if(k)
                f=1;
        }
    }
    if(n==1)
    {
        x=v[0],k=1;
        while(x>0)
        {
            if(x%10==1)
                k=0;
            x/=10;
        }
        if(k)
            f=1;
    }
    if(f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


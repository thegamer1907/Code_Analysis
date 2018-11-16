#include <bits/stdc++.h>
using namespace std;
const int MAXN=123456;
int a[MAXN];
int b[MAXN];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    string s;cin>>s;int n=s.size();

    int cnta=0,cntb=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
            a[cnta++]=i;

        if(s[i]=='B'&&s[i+1]=='A')
            b[cntb++]=i;
    }
    if(cnta>0&&cntb>0)
    {
        for(int i=0;i<cnta;i++)
        {
            int p=upper_bound(b,b+cntb,a[i]+1)-b;
            if(p!=cntb)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }

        for(int i=0;i<cntb;i++)
        {
            int p=upper_bound(a,a+cnta,b[i]+1)-a;
            if(p!=cnta)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }

    }




    cout<<"NO"<<endl;

    return 0;
}

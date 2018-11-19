#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

const int maxn=202;

string str[maxn];
int num[maxn];
set <int> st;

int solve(int pos)
{
    for(int len=1;;len++)
    {
        if(str[pos].size()<=len) return len-1;
        st.clear();
        int bound=1<<len;

        int sum=0,i;
        for(i=0;i<len-1;i++)   sum=(sum<<1)+str[pos][i]-'0';
        for(i;i<str[pos].size();i++)
        {
            sum=(sum<<1)+(str[pos][i]-'0');
            st.insert(sum);
            sum-=(str[pos][i-len+1]-'0')*(1<<len-1);
            if(st.size()==bound)    break;
        }
        if(st.size()==bound)    continue;
        else                    return len-1;
    }
    return 0;
}

int main()
{
    int n;
    while(cin>>n)
    {
        memset(num,-1,sizeof(num));
        for(int i=1;i<=n;i++)   cin>>str[i];

        int m;
        cin>>m;
        for(int i=n+1;i<=n+m;i++)
        {
            int a,b;
            cin>>a>>b;

            if(num[a]==-1)  num[a]=solve(a);
            if(num[b]==-1)  num[b]=solve(b);

            str[i]=str[a].substr(max(0,(int)(str[a].size()-500)),str[a].size())+str[b].substr(0,min(500,(int)str[b].size()));

            num[i]=max(num[a],num[b]);
            num[i]=max(num[i],solve(i));
            cout<<num[i]<<endl;
        }
    }
    return 0;
}

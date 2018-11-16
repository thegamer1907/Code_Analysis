#include<bits/stdc++.h>
using namespace std;
set<int> c[100005];
long long i,j,n,m,mas[100005],a,b,rez,liel,ab[100005];
int main()
{
    std::cin.sync_with_stdio(false);
    cin >> n >> m;
    i=0;
    while (i<n)
    {
        cin >> mas[i];
        ab[mas[i]]=1;
        i++;
    }
    i=0;
    while (i<m)
    {
        cin >> a >> b;
        a--;
        b--;
        if (mas[a]!=mas[b])
        {
            c[mas[a]].insert(mas[b]);
            c[mas[b]].insert(mas[a]);
        }
        i++;
    }
    i=0;
    rez=-1;
    while (i<=100000)
    {
        if (c[i].size()>rez&&ab[i]==1)
        {
            rez=c[i].size();
            liel=i;
        }
        i++;
    }
    cout << liel;
    return 0;
}

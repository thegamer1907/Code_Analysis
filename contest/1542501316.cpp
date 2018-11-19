#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int n,k;
bool mp[maxn][5];
int kkk[maxn];

int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
        for(int j=0; j<k; j++)
            cin>>mp[i][j];
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        int num = 0;
        for(int j=0; j<k; j++)
            if(mp[i][j])
                num|=1<<j;
        kkk[num]++;
    }
    for(int i=0; i<1<<k; i++)
        for(int j=0; j<1<<k; j++)
            if((i&j)==0&&(kkk[i]&&kkk[j]))
                flag = true;
    cout<<(flag?"YES":"NO")<<endl;
    return 0;
}

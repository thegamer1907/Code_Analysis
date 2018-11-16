#include<bits/stdc++.h>
using namespace std;
#define si(a)   scanf("%d",&a)
#define fl(i,a,n)   for(int i=a; i<n; i++)
int boy[200], girl[200], n, m, vis[200];

int main()
{
    si(n);
    fl(i,0,n)
        si(boy[i]);
    si(m);
    fl(i,0,m)
        si(girl[i]);
    sort(boy,boy+n);
    sort(girl,girl+m);
    int cnt = 0;
    fl(i,0,m)
    {
        fl(j,0,n)
        {
            if(boy[j] == -5) continue;
            if(abs(girl[i]-boy[j])==1 || abs(girl[i]-boy[j])==0)
            {
                boy[j] = -5;
                cnt++;
                break;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int it,k,n;

int nr[6];
int v[21];
int fact[6];
int qw[6];

bool ok()
{

        if(it==0)
            return 0;
        for(int i=1;i<=k;i++)
            if(qw[i] > it/2 )
                return 0;
        return 1;
}
void Add(int nr)
{
    it++;
    for(int i=1;i<=k;i++)
        if(nr & (1<<(i-1)))
            qw[i]++;
}
void Remove(int nr)
{
    it--;
    for(int i=1;i<=k;i++)
        if(nr & (1<<(i-1)))
            qw[i]--;
}

int bkt(int deep)
{
    if(deep > 14)
        return ok();

    if(bkt(deep+1))
        return 1;

    if(v[deep])
    {
        Add(deep);
        if(bkt(deep+1))
            return 1;
        Remove(deep);
    }
    return 0;
}

int main()
{

    cin>>n>>k;

    fact[1] = 1;
    fact[2] = 2;
    fact[3] = 4;
    fact[4] = 8;
    int type;

    for(int i=1; i<=n; i++)
    {
        type = 0;
        for(int j=1; j<=k; j++)
        {
            cin>>nr[j];
            type = type + nr[j] * fact[j];
        }
        v[type]++;
    }

    if(bkt(0))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

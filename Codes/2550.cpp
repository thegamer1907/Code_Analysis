#include <bits/stdc++.h>

using namespace std;
bool prime[10000005];
int numberUsed[10000005];
int goboy[10000005];
void SieveOfEratosthenes(int n)
{
    for (int p=2; p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p; i<=n; i += p)
            {
                goboy[p] += numberUsed[i];
                prime[i] = false;
            }
        }
    }
}
int main()
{
    memset(prime,true,sizeof prime);
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0;i < n;i++)
        scanf("%d",&numbers[i]),numberUsed[numbers[i]]++;

    SieveOfEratosthenes(1e7);
    for(int i = 2;i <= 1e7;i++)
        goboy[i] += goboy[i-1];
    int m;
    cin >> m;
    for(int i = 0;i < m;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        if(r > 10000000)
            r = 10000000;
        if(l > 10000000)
            l = 10000000;
        printf("%d\n",goboy[r] - goboy[l-1]);
    }
    return 0;
}

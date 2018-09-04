/* *******************************
    -----------------------------
   | copyrights with l0gic_b0mb  |
    -----------------------------
   ******************************* */

#include<bits/stdc++.h>
#define MOD 1000000007
#define llint long long int
#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)
using namespace std;

llint N,M,num,ans;
vector<llint> prime,frequency;
int minprime[10000001];
map<int,int> mp;

void sieve()
{
    for(int i=2;i*i<=10000000;i++)
    {
        if(minprime[i]==0)
        for(int j=i*i;j<=10000000;j+=i)
        {
            minprime[j]=i;
        }
    }
    for(int i=2;i<=10000000;i++)
    {
        if(minprime[i]==0)
            minprime[i]=i;
    }
}

void process(llint num)
{
    while(num>1)
    {
        int divisor = minprime[num];
        while(num%divisor==0)
        {
            num/=divisor;
        }
        mp[divisor]++;
    }
    return;
}

void form_array()
{
    llint current=0,primeval;
    prime.push_back(0);
    frequency.push_back(0);
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        current+=it->second;
        primeval=it->first;
        prime.push_back(primeval);
        frequency.push_back(current);
    }
    return;
}

llint reduceR(llint R)
{
    llint pos = lower_bound(prime.begin(),prime.end(),R)- prime.begin();
    if(pos>=prime.size()||prime[pos]>R)
        pos--;
    return pos;
}

llint reduceL(llint L)
{
    llint pos = lower_bound(prime.begin(),prime.end(),L)- prime.begin();
    return pos;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    scanf("%I64d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%I64d",&num);
        process(num);
    }
    form_array();
    scanf("%I64d",&M);
    while(M--)
    {
        llint L,R;
        scanf("%I64d%I64d",&L,&R);
        R=reduceR(R);
        L=reduceL(L);
        if(L>R)
            ans=0;
        else
            ans=frequency[R]-frequency[L-1];
        printf("%I64d\n",ans);
    }
    return 0;
}

/* Hidden within the kernel is a l0gic_b0mb; malicious code designed to execute under circumstances I've programmed. */

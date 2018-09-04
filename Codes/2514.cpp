#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int* H = new int[10000001]();
    bool* notPrime = new bool[10000001]();
    int* ats = new int[10000001]();
    int* prefix = new int[10000001]();
    vector<int>primes;
    int n,x,q,L,R;
    cin>>n;

    while(n--)
    cin>>x,H[x]++;

    for(int i=2; i<3200; i++)
    {
        while(i < 3200 && notPrime[i])i++;
        for(int j=i+i; j<10000001; j+=i)
            notPrime[j]=1;
    }

    for(int i=2; i<10000001; i++)
        if(!notPrime[i])primes.push_back(i);

    for(int i=0; i<primes.size(); i++)
        for(int j=primes[i]; j<10000001; j+=primes[i])
            ats[primes[i]]+=H[j];

    for(int i=1; i<10000001; i++)
        prefix[i]=prefix[i-1]+ats[i];

    cin>>q;

    while(q--)
    {
        cin>>L>>R;
        R=min(R,10000000);
        if(L>=10000000)L=R=1;
        cout<<prefix[R]-prefix[L-1]<<"\n";
    }

    return 0;
}

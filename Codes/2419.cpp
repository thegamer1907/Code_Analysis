#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
char S[10000000];
int A[10000001];
vector<int> primes;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 2; i < 10000000; ++i)
        if(!S[i])
        {
            primes.push_back(i);
            if(i < 10000)
            for(int j = i * i; j < 10000000; j += i)
                S[j] = 1;
        }
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        for(int p:primes)
        {
            if(p*p > num)
                break;
            if(num%p == 0)
            {
                ++A[p];
                while(num%p == 0)
                    num /= p;
            }
        }
        ++A[num];
    }
    for(int i = 2; i <= 10000000; ++i)
        A[i] += A[i-1];
    cin>>n;
    while(n--)
    {
        int l, r;
        cin>>l>>r;
        l = min(l, 10000000);
        r = min(r, 10000000);
        cout<<A[r]-A[l-1]<<'\n';
    }
    return 0;
}

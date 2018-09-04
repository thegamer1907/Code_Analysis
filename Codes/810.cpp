#include <bits/stdc++.h>

using namespace std;

long long f(long long n,long long k)
{
    long long nn=(long long)pow(2,n-1);
    if(nn==k)
    {
        return n;
    }
    else if(k<nn)
    {
        return f(n-1,k);
    }
    else
    {
        return f(n-1,k-nn);
    }
}



int main()
{
    long long n,k;
    cin>>n>>k;
    cout<<f(n,k);
    return 0;
}

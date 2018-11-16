#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a,b;
    cin>>a>>b;
    long long f=0;
    while (n!=1)
    {
        n+=n % 2;
        n/=2;
        f++;
    }
    long long otv=1;
    while (((a+1) / 2) != ((b+1)/2))
    {
        a=(a+1)/2;
        b=(b+1)/2;
        //cout<<a<<" "<<b;
        otv++;
    }
    //cout<<f;
    if (otv == f)
    {
        cout<<"Final!";
    }
    else
        cout<<otv;
}

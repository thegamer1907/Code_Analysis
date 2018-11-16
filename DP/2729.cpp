#include<bits/stdc++.h>
#define lld long long int
#define ld long double
#define mod 1000000007
#define all(v) v.begin(),v.end()
#define rep(i,a,b)	for(lld i=a;i<=b;i++)
#define repr(i,a,b) for(lld i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
     ios;
     lld TESTS,n,i,j,f;
     TESTS=1;
     while(TESTS--)
     {
        cin>>n;
        lld bills =0;
        bills += n/100;
        n= n%100;
        bills += n/20;
        n=n%20;
        bills += n/10;
        n= n%10;
        bills += n/5;
        n=n%5;
        bills += n/1;
        cout<<bills;
     }
    return 0;
}

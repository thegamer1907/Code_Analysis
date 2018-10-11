#include<bits/stdc++.h>
using namespace std;

#define mem(x,y) memset(x,y,sizeof(x))  
#define lli long long int
#define ll long long 
#define ld long double
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define MOD 1000000007
#define PI 3.141592653589793
#define setBitCount(x) __builtin_popcount(x)
#define all(a) (a).begin(), (a).end()
#define all_r(a) (a).rbegin(), (a).rend()
//std::ifstream in("input.txt");
//std::ofstream out("output.txt");

lli gcd(lli a,lli b) { return b?gcd(b,a%b):a; }

// calculating (x^y)%p
lli power(lli x,lli y,lli p)
{
    lli res = 1;      
    x = x % p;  
    while (y > 0)
    {
        if (y & 1) //y is odd
        res = (res*x) % p;
            
        y = y>>1; 
        x = ( (x%p)*(x%p) )% p;  
    }
    return res%p;
}
 
// calculating modular inverse using fermat little theorem
lli modInverse(lli n,lli p) 
{
    return power(n, p-2, p)%p;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    lli n,t;
    cin>>n>>t;

    lli a[n+5];
    for(lli i=1;i<=n;i++)
    cin>>a[i];

    lli i=1,j=1,sum=0,count=0,maxi=INT_MIN;
    while(i<=n && j<=n)
    {
        if(sum+a[j]<=t)
        {
            sum+=a[j];
            count++;
            j++;
        }
        else
        {
            sum-=a[i];
            i++;
            count--;
        }
        maxi=max(maxi,count);

    }
    if(maxi<0)
    maxi=0;
    cout<<maxi;
    
    
    return 0;
}




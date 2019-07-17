#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pii          pair<char,ll>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e6;

int main()
{
    ll n,m,k;

    scanf("%lld%lld%lld",&n,&m,&k);

    ll a[m+2] , op = 0 , last = k , lastErLast = 0 , rem = m , start = 0 , cnt = 10;

    for(int i=0; i<m; i++)
        scanf("%lld",&a[i]);
int st = 0;
    while(rem)
    {
        int i1 = upper_bound(a+start,a+m,lastErLast+st)-a;
        int i2 = upper_bound(a+start,a+m,last+st)-a;


        if(i2-i1 <= 0)
{
//if(i2 == m) i2--;
st = 0;
            lastErLast = (a[i2]-start)-((a[i2]-start)%k) , last = lastErLast+k;
//cout << lastErLast << " - " << last << endl;
}
        else
            rem -= (i2-i1) , op++ , start += (i2-i1) , st += (i2-i1);
//cout << "--" << rem << " " << lastErLast+st << " " << last+start << "=" << start << "÷" << i2 << " Mof " << a[i2] << " fk " << i1  << " btd " << start << " kdd "<< a[i2]-start -(a[i2]-start)%k << endl;
    }
    printf("%lld",op);
}
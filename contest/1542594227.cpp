#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pll pair <ll , ll>

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair

#define X first
#define Y second

#define LB(x) ((x) & -(x))
#define BIT(a , b) (((a)>>(b)) & 1)

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin>>s;

	ll n , a=0 , b=0 , c=0;
	cin>>n;

	for(ll i=0;i<n;i++)
    {
        string t;
        cin>>t;

        a+=(t==s);
        b+=(t[0]==s[1]);
        c+=(t[1]==s[0]);
    }

    if (a || (b && c))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

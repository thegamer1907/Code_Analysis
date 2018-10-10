#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define tr(x,it) for(auto it = x.begin();it!=x.end();++it)
#define fpresent(x,c) ((c).find(x) != (c).end())  //set,map
#define present(c,x) (find(all(c),x) != (c).end()) //vector
#define pb push_back 
#define mp make_pair
// #define FOR(s,e) for(ll i=s;i<e;i++)
template< class T > T max3(const T &a, const T &b, const T &c) { return max(a, max(b, c)); }
template< class T > T min3(const T &a, const T &b, const T &c) { return min(a, min(b, c)); }
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }
void computeLPSArray(string pat, ll M, ll *lps);
 
// Prlls occurrences of txt[] in pat[]
bool kmp(string pat, string txt)
{
    ll M = pat.length();
    ll N = txt.length();
    ll lps[M];
    computeLPSArray(pat, M, lps);
    ll i = 1;  // index for txt[]
    ll j  = 0;  // index for pat[]
    while (i < N-1)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            return 1;
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
    return 0;
}
void computeLPSArray(string pat, ll M, ll *lps)
{
    // length of the previous longest prefix suffix
    ll len = 0;
 
    lps[0] = 0; // lps[0] is always 0
    ll i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
bool mat(string pat,string s)
{
	for(ll i=1;i<s.length()-pat.length();i++)
		if(kmp(pat,s.substr(i,pat.length())))
			return 1;
	return 0;
}
int main()
{
	ll n,k=0,i=0,j;
	string s;
	cin>>s;
	n=s.length();
	ll HASH[n+1],L=s.length(),P[n+1],HASH2[n+1],p=1e6+1;
	std::vector<ll> v;
	P[0]=1;
    for(ll i=1;i<L;i++) P[i]=(P[i-1]*p)%mod;
    HASH[0]=s[0]-'a';
    HASH2[0]=s[L-1]-'a';
    if(HASH[0]==HASH2[0]) v.push_back(1);
    for(ll i=1;i<L-2;i++)
    {
        ll temp=(P[i]*(s[i]-'a'))%mod;
        HASH[i]=(HASH[i-1]+temp)%mod;
        temp=(HASH2[i-1]*p)%mod;
        HASH2[i]=(temp+s[L-i-1]-'a')%mod;
        if(HASH2[i]==HASH[i]) v.push_back(i+1);

    }
	if(v.empty())
	{
		cout<<"Just a legend\n";
		return 0;
	}
	ll l=0,r=v.size()-1,mid;
	ll ans=-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(kmp(s.substr(0,v[mid]),s))
			l=mid+1,ans=mid;
		else
			r=mid-1;		
	}
	// cout<<mid<<endl;
	if(ans!=-1)
		cout<<s.substr(0,v[ans])<<endl;
	else 
		cout<<"Just a legend"<<endl;
	return 0;
}
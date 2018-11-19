#include <bits/stdc++.h>
#include<string.h>
#include <string> 
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fr(i,s,e) for(i=s;i<e;i++)
#define rf(i,s,e) for(i=s-1;i>=e;i--)
#define pb push_back
#define eb emblace_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define vl vector<long long>
 
#define vi vector<int> 
#define vii vector< vector<int> >
#define viii vector<vector<vector<int> > > 
#define vll vector< vector<long long> >
#define vpi vector< pair<int,int> >   
#define vpl vector< pair<ll,ll> > 
#define vlll vector<vector<vector<long long> > >   
typedef pair<pair<int, int>,int> P;
 #define mod %1000000007
 //#define p 41
bool less_vectors(const vector<int>& a,const vector<int>& b) 
{
   return a.size() > b.size();
}
 
int gcd(int a,int b)
{
if(a%b==0)
    return b;
    else
        return gcd(b,a%b);
}
class dc
{
    public:
bool operator()(pair<int,int> p1,pair<int,int>  p2)
{
    return p1.ss>p2.ss;
}

};
ll fastexpo(ll a,ll b)
{
    //trace2(a,b);
    ll res=1;
    while(b>0)
    {
        if(b%2==1)
            res=(((res)mod)*((a)mod))mod;
        a=(((a)mod)*((a)mod))mod;
        b/=2;
    }
    //trace1(res);
    return res;
}
ll fastexpom(ll a,ll b,ll m)
{
ll res=1;
    while(b>0)
    {
        if(b%2==1)
            res=(((res)%m)*((a)%m))%m;
        a=(((a)%m)*((a)%m))%m;
        b/=2;
    }
    return res;
}
ll modinv(ll a,ll m=1000000007)
{
return fastexpom(a,m-2,m);
}

int main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int h,m,s;
	cin>>h>>m>>s;
	int t1;
	int t2;
	cin>>t1>>t2;
	bool r=1;
	bool l=1;
	if(h==12)
		h=0;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	if(t1>t2)
	{
		int temp=t1;
		t1=t2;
		t2=temp;
	}
	//trace3(h,t1,t2);
	if(t1<t2)
	{
		if(h>=(t1) && h<(t2))
			r=0;
		else
			l=0;
		if(r==0)
		{
			//trace4(m,(t1*5)%60,(t2*5)%60,s);
			if(m>=(t1*5)%60 && m<(t2*5)%60)
				if(s>=(t1*5)%60 && s<(t2*5)%60)
					l=1;
				else
					l=0;
			else
				l=0;
		}
		else
			if((m>=(t1*5)%60 && m<(t2*5)%60) || (s>=(t1*5)%60 && s<(t2*5)%60))
				r=0;
			else
			r=1;
	}
	if(l || r)
		cout<<"YES";
	else
		cout<<"NO";





	return 0;
}
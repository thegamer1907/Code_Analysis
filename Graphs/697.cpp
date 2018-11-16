/* Shivam Sharma
	`They call me Hei$enBerg (~_^)` 
	ABV-Indian Institute of Information Technology and Management, Gwalior
	*/

#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> vi;
typedef vector< vector<ll> > vvi;
typedef pair<ll,ll> pii;
typedef map<string,ll> msi;
typedef set<ll> si;
typedef vector< pair<ll,ll> > vpii;


#define T() 	ll t;	cin>>t;		while(t--)
#define p_b		 push_back
#define p_f 		push_front
#define pop_b 		pop_back()
#define pop_f 		pop_front()
#define m_p		make_pair
#define l_b(v,l)     lower_bound (v.begin(), v.end(), l)
#define u_b(v,l)   	 upper_bound (v.begin(), v.end(), l)
#define min_pos(a)		 min_element(a.begin(),a.end())-a.begin()
#define max_pos(a) 		 max_element(a.begin(),a.end())-a.begin()
#define min_el(a) 		 *min_element(a.begin(),a.end())
#define max_el(a)		 *max_element(a.begin(),a.end())
#define cnt(a,l) 		 count(a.begin(),a.end(),l)
#define sort_a(a) 		 sort(a.begin(),a.end())
#define sort_d(a) 		 sort(a.begin(),a.end(),greater<ll>() )
#define summ(a)  	 accumulate(a.begin(),a.end(),0)
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define all(x) x.begin(),x.end()
#define mod  1000000007
#define inf      1e9
#define FF first
#define SS second
#define rep(i,a,b)      for(ll i=(ll)(a);i<(ll)(b);i++)
#define rrep(i,a,b)      for(ll i=(ll)(a);i>=(ll)(b);i--)
#define mset(a,b)    	memset(a,b,sizeof(a));
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
///==========INPUT=============///
	#define     sc(a)           scanf("%lld",&a);
	#define     sc2(a,b)        scanf("%lld%lld",&a,&b);
	#define     sc3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c);
	#define     sc4(a,b,c,d)    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
///==========PRINTING=============///
	#define     prarr(arr)      rep(i,0,sizeof(arr)/sizeof(ll)) cout<<arr[i]<<" "; nl
	#define     prvec(v)        rep(i,v.size()) cout<<v[i]<<" "; nl
	#define     pr(x)           cout<<x<<"\n";
	#define     pr2(x, y)       cout<<x<<" "<<y<<"\n";
	#define     pr3(x, y, z)    cout<<x<<" "<<y<<" "<<z<<"\n";	
///==========DEBUGGING=============///
    #define 	debug(a) 		cout<<"*"<<a<<endl;
   	#define 	debug2(a,b) 	cout<<"$"<<a<<" "<<b<<endl;
   	#define 	debug3(a,b,c) 	cout<<"$"<<a<<" "<<b" "<<c<<endl;
	#define 	bug 			cout<<"#"<<endl;
   	#define 	nl 				cout<<'\n';
   	#define     endl            '\n'

int main()
{
	fast;
	ll n,t;
	string s;
	cin>>n>>t>>s;
	ll f=0;
	while(t--)
	{
		f=0;
		rep(i,0,n-1)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i++;
				f=1;
			}
		}
		if(f==0)
			break;
	}
	cout<<s<<endl;
}
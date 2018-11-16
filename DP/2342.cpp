#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ins insert
#define sb substr
#define sp fixed<<setprecision
#define bp __builtin_popcount
#define pll pair<ll,ll>
#define pld pair<ld,ld>
using namespace std;

ll power(ll x, ll y);
ll mpower(ll x, ll y, ll p);
ll modInv(ll a, ll m);
ll gcdExtended(ll a, ll b, ll *x, ll *y);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,l,p,q,r,x,y,z,a,b,c,d,f,n,m,M=1000000007;
	string s;
	vector<ll> v;
	vector<ll> :: iterator itrv;
	unordered_map<ll,ll> N;
	set<ll> S;
	set<ll> :: iterator itr;
    cin>>s;
	n=s.size();
	ll A[n];
	for(i=0;i<n;i++){
		A[i]=s[i]-'0';
	}
	x=0;
	vector<vector<ll>> w;
	while(x<1000){
		v.clear();
		p=x;
		y=p/100;
		v.pb(y);
		p=p%100;
		y=p/10;
		v.pb(y);
		p=p%10;
		v.pb(p);
		w.pb(v);
		x+=8;
	}
	a=0;
	b=0;
	c=0;
	x=LLONG_MAX;
	z=-1;
	for(i=0;i<2;i++){
		f=2;
		d=0;
		p=-1;
		q=-1;
		r=-1;
		for(j=n-1;j>=0;j--){
			if(f>1 && A[j]==w[i][f]){
				if(f==2){
					r=j;
				}
				f--;
			}
		}
		if(f==1 && (n-1)<x){
			x=n-1;
			a=p;
			b=q;
			c=r;
			z=0;
		}
	}
	for(i=2;i<13;i++){
		f=2;
		d=0;
		p=-1;
		q=-1;
		r=-1;
		for(j=n-1;j>=0;j--){
			if(f>0 && A[j]==w[i][f]){
				if(f==1){
					q=j;
				}
				else if(f==2){
					r=j;
				}
				f--;
			}
		}
		if(f==0 && (n-2)<x){
			x=n-2;
			a=p;
			b=q;
			c=r;
			z=1;
		}
	}
	for(i=13;i<125;i++){
		f=2;
		d=0;
		p=-1;
		q=-1;
		r=-1;
		for(j=n-1;j>=0;j--){
			if(f>=0 && A[j]==w[i][f]){
				if(f==0){
					p=j;
				}
				else if(f==1){
					q=j;
				}
				else if(f==2){
					r=j;
				}
				f--;
			}
			else{
				if(f>0){
					d++;
				}
			}
		}
		if(f==-1 && d<x){
			x=d;
			a=p;
			b=q;
			c=r;
			z=2;
		}
	}
	if(x==LLONG_MAX){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		if(z==0){
			cout<<A[c]<<endl;
		}
		else if(z==1){
			cout<<A[b]<<A[c]<<endl;
		}
		else{
			for(i=0;i<a;i++){
				cout<<A[i];
			}
			cout<<A[a]<<A[b]<<A[c]<<endl;
		}
	}
	return 0;
}

ll modInv(ll a, ll m){
	ll x, y;
	ll g = gcdExtended(a, m, &x, &y);
	ll res = (x%m + m) % m;
	return res;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y){
	if (a == 0){
		*x = 0, *y = 1;
		return b;
	}
	ll x1, y1;
	ll gcd = gcdExtended(b%a, a, &x1, &y1);
	*x = y1 - (b/a) * x1;
	*y = x1;
	return gcd;
}

ll mpower(ll x, ll y, ll p){
	ll res = 1;
	x = x % p;
	while (y > 0)
	{
		if (y & 1){
			res = (res*x) % p;
		}
		y = y>>1;
		x = (x*x) % p;
	}
	return res;
}

ll power(ll x, ll y){
	ll res = 1;
	while (y > 0){
		if (y & 1)
			res = res*x;
		y = y>>1;
		x = x*x;
	}
	return res;
}

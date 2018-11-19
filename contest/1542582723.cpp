#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;
typedef pair<ll,int> pli;
#define pq priority_queue
#define rep(i,n) for (int i=0;i<n;++i)
#define mp make_pair
#define pb push_back
#define pf push_front
#define F first
#define S second
#define INF 2000000009
typedef pair<pii,pii >  T;
int n,k;
int a[100005][4];
int pi=INF,pj=INF;
set<pair<pii,pii > > s;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>k;
    if (n==1){
    	rep(i,k){
    		int x;
    		cin>>x;
			if (x==1){
				cout<<"NO";
				return 0;
			} 
    	}
    	cout<<"YES";
    	return 0;
    }
    rep(i,n){
    	int cnt=0,pos=0;
    	rep(j,k){
    		cin>>a[i][j];
    		if (a[i][j]==1){
    			cnt++;
    			pos=j;
    		}
    	}
    	if (cnt==1){
    		pi=i;pj=pos;
    	}
    	else if (cnt==0){
    		cout<<"YES";
    		return 0;
    	}
    }
    if (pj!=INF){
    	rep(i,n){
    		if (a[i][pj]==0){
    			cout<<"YES";
    			return 0;
    		}
    	}
    	if (k<4){
    		cout<<"NO";
    		return 0;
    	}
    }
		if (k<4){
			cout<<"NO";
			return 0;
		} 
		rep(i,n){
    		T now;
    		now=mp(mp(a[i][0],a[i][1]),mp(a[i][2],a[i][3]));
    		s.insert(now);
    	}
    	//cout<<"INS  F"<<endl;
    	rep(i,n){
    		T now;
    		now=mp(mp(!a[i][0],!a[i][1]),mp(!a[i][2],!a[i][3]));
    		if (s.find(now)!=s.end()){
    			cout<<"YES";
    			return 0;
    		}
    		//cout<<"checked:  "<<i<<endl;
	    }
    cout<<"NO";
    return 0;
}
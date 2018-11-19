#include <bits/stdc++.h>
#define MAX 100005
#define ll long long
#define upperlimit 1000100
#define INF 1e18
#define eps 1e-8
#define endl '\n'
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define MOD 1000000007
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb(x) push_back(x)
#define vi vector<int>
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define csl ios::sync_with_stdio(false);cin.tie(0);
#define fi(a,b,c) for(int i=a;i<b;i=i+c)
#define fj(a,b,c) for(int j=a;j<b;j+=c)
using namespace std;
set<int> a;
int k;
bool ispos(int n,vector<vi> aa){
	int sum[k]={0};
	fi(0,n,1){
		fj(0,k,1){
			sum[j]+=aa[i][j];
		}
	}
	bool pos=true;
	for(int i:sum){
		if(i>n/2)pos=false;
	}
	return pos;
}
int hashi(vi p){
	int ans=0,mul=1;
	for(int i:p){
		ans+=i*mul;
		mul*=2;
	}
	return ans;
}
vi rash(int n){
	vi ans;
	ans.pb(n%2);
	n/=2;
	fi(1,k,1){
		ans.insert(ans.begin(),n%2);
		n=n/2;
	}
	return ans;
}
void prin(vector<vi> a){
	for(vi i:a){for(int j:i)cout<<j<<" ";
	cout<<endl;}
	cout<<endl;
}
int main()
{
    int n;
    sd(n);sd(k);
    fi(0,n,1){
    	int s=0;
    	vi aii;
    	fj(0,k,1){
    		int ai;
    		sd(ai);
    		s+=ai;
    		aii.pb(ai);
    		
    	}
    	a.insert(hashi(aii));
    	//debug(hashi(aii));
    	if(s==0){
    		cout<<"yes";
    		return 0;
    	}
    	/*int x,y,z;
    	cin>>x>>y>>z;
    	a.pb(mp(mp(x,y),mp(z,x+y+z)));*/
    }
    //debug(*a.begin());
    for(int i=1;i<1<<a.size();i++)
	{
		vector<vi> all;
		for(int j=0;j<a.size();j++)
		{
			//debug(1<<(j)&i);
			if((1<<(j))&i) 
			{
				//debug(j);
    			all.pb(rash(*next(a.begin(), j)));
			}
		}
		//debug(a.size());
	//	prin(all);
		if(all.size()&&ispos(all.size(),all)){
   			cout<<"yes";
			return 0;
    	}
	}
    /*for(int i=0;i<a.size();i++){
    	
    	for(int j=i;j<a.size();j++){
    		vector<vi> all;
    		for(int k=i;k<=j;k++){
    			all.pb(rash(*next(a.begin(), k)));
    			//prin(rash(*next(a.begin(),k)));
    		}
    		prin(all);
    		if(ispos(j+1-i,all)){
    			cout<<"yes";
    			return 0;
    		}
    	}
    }*/
    cout<<"no";
    
}
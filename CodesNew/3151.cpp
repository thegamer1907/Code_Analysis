#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff first.first
#define fs first.second
typedef long long ll;
typedef unsigned long long ull;

//const ll mod = 1e16+371;
//const ll mod = 1e12+193;

//const double PI = acos(-1);
const ll INF = 1e18;
const ll MAX=1e5+10, N=4e5+10;
//const int lim=1<<18;
const ll mod = 100000000 ;

int gcd(int a,int b){
	if(!a)return b;
	return gcd(b%a,a);
}
int main(){
	ios_base::sync_with_stdio(0);
	//	cin.tie(0);
	//	srand(time(0));

	int n, k;
	while(cin >> n >> k){
		vector<int>v(n);
		for(int i=0;i<n;i++)cin>>v[i];
		int fl=-1,fr=-1;
		int l=0,r=-1;
		for(int i=0;i<n;i++){
			if(v[i]==1)r++;
			else{
				if(k)k--,r++;
				else{
					while(l<=r&&!k){
						if(v[l]==0)k++;
						l++;
					}
					if(k)k--,r++;
					else l++,r++;
				}
			}
			if((fl==-1&&fr==-1) || (r-l+1>fr-fl+1))fl=l,fr=r;
		}
//		cout<<fr<<" "<<fl<<endl;
		cout<<fr-fl+1<<endl;
		for(int i=0;i<n;i++)
			if(i>=fl&&i<=fr)cout<<1<<" ";
			else cout<<v[i]<<" ";
		cout<<endl;
	}

	return 0;
}

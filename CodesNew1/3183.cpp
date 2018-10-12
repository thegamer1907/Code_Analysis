//raja1999
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip> 
//setbase - cout << setbase (16)a; cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 <<endl;prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val

using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >

//std::ios::sync_with_stdio(false);
int a[300005];
int main(){
	std::ios::sync_with_stdio(false);
	int n,k,i,j,k2,maxx=-100,c=0,k1;
	cin>>n>>k;
	rep(i,n){
		cin>>a[i];
	}	
	j=0;	
	// rep(i,n){
	// 	if(a[i]==1){
	// 		while(j<i){
	// 			nxt[j]=i;
	// 			j++;
	// 		}
	// 	}
	// }
	// while(j<i){
	// 	nxt[ ]
	// }
	
	int ans;
	k1=k;
	k2=0;
	i=0;
	while(k2<n&&k1>=0){
		if(a[k2]==1){
			k2++;
			c++;
		}
		else{
			if(k1==0){
				break;
			}
			k1--;
			c++;
			k2++;
		}
		//c++;
	}
	maxx=c;
	ans=i;
	//cout<<c<<endl;
	f(j,i+1,n){
		if(a[j-1]==0){
			k1++;
			c--;
		}
		else{
			c--;
		}
		while(k2<n&&k1>=0){
			if(a[k2]==1){
				k2++;
				c++;
			}
			else{
				if(k1==0){
					break;
				}
				k1--;
				c++;
				k2++;
			}
		}
		maxx=max(maxx,c);
		if(c==maxx){
			ans=j;
		}
	}
	cout<<maxx<<endl;
	rep(i,ans){
		cout<<a[i]<<" ";
	}
	j=ans;
	k1=k;
	while(j<n&&k1>=0){
		if(a[j]==1){
			j++;
		}
		else{
			if(k1==0){
				break;
			}
			k1--;
			j++;
		}
		cout<<1<<" ";
	}
	//cout<<ans<<endl;
	f(k2,j,n){
		cout<<a[k2]<<" ";
	}
} 
